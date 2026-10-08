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
 * Filename: entity.h
 * Creator: Yaokai Liu
 * Create Date: 2026-10-08
 * Copyright (c) 2026 Yaokai Liu. All rights reserved.
 **/

#ifndef YIKO_ENTITY_H
#define YIKO_ENTITY_H
#include "logger.h"


typedef struct Entity {
  uint16_t gc_flags; // YIKO_GC_FLAG
  uint16_t entity_flags; // YIKO_ENTITY_FLAG
  uint32_t eid; // entity id
  REFER(void) object; // REFER of object this struct inhabits
  Logger logger;

  Array/*<uint32_t>*/ *attributes; // Array<attribute id>
  Array /*<uint32_t>*/ *states; // Array<state id>
  Array/*<uint32_t>*/ *traits; // Array<trait id>
  Array /*<Fate>*/ *fates; // Array<Fate>
  Array /*<Buff>*/ *buffs; // Array<Buff>

  // Array<Pair<entity id, relation type>>
  Array/*<Pair<uint32_t, uint32_t>>*/ *relationships;
} Entity;



#endif //YIKO_ENTITY_H
