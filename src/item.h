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
 * Filename: item.h
 * Creator: Yaokai Liu
 * Create Date: 2026-10-06
 * Copyright (c) 2026 Yaokai Liu. All rights reserved.
 **/

#ifndef YIKO_ITEM_H
#define YIKO_ITEM_H
#include "yiko.h"
#include "entity.h"

typedef struct Item {
  Entity SUPPER;
  uint32_t type;
  uint32_t count;
  // other data
} Item;

Item *Item_new(char *name);

#endif //YIKO_ITEM_H
