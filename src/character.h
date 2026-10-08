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
 * Filename: character.h
 * Creator: Yaokai Liu
 * Create Date: 2026-10-05
 * Copyright (c) 2026 Yaokai Liu. All rights reserved.
 **/

#ifndef YIKO_CHARACTER_H
#define YIKO_CHARACTER_H
#include "entity.h"

typedef struct Character {
  Entity SUPER;
  Logger logger;
  Array /*<Pair<IDENT_TYPE, value>>*/ *identity;

  Array/*<Attribute>*/ *attributes;
  Array /*<State>*/ *states;
  Array/*<Trait>*/ *traits;
  Array /*<Fate>*/ *fates;
  Array /*<Buff>*/ *buffs;

  // Array<Pair<REFER(Entity), relation type>>
  Array/*<Pair<REFER(Character), uint32_t>>*/ *relationships;
  // other data
} Character;

uint32_t Character_init(Character *character, const Allocator *allocator);

#endif //YIKO_CHARACTER_H
