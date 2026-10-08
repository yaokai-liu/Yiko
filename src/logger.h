/**
 * License
 *
 * Yiko - A Game Character Manage System Library in C
 * Copyright (C) 2026 Yaokai Liu
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * Project Name: Yiko
 * Module Name: src
 * Filename: logger.h
 * Creator: Yaokai Liu
 * Create Date: 2026-10-05
 * Copyright (c) 2026 Yaokai Liu. All rights reserved.
 **/

#ifndef YIKO_LOGGER_H
#define YIKO_LOGGER_H
#include "yiko.h"

typedef struct Record {
  uint64_t time; // game time
  uint32_t type; // record type
  uint32_t target; // entity id
  uint32_t rid; // record id
  Array /*<Pair<uint32_t, uint32_t>>*/ *items; // Pair<item id, operation type>
  void *thinking; // character's thinking about this record, influence favor, moods and decisions
} Record;

typedef struct Logger {
  Array /*<Record>*/ *history; // Array<Record>
  AVLTree /*<REFER(Entity), int32_t>*/ *favors; // AVLTree<entity virtual address, favor value>

  // AVLTree<entity virtual address, Array<record index, favor change>>
  AVLTree /*<REFER(Entity), Array<uint32_t, int32_t>>*/ *information;
  // other data
} Logger;

Logger *Logger_new();

#endif //YIKO_LOGGER_H
