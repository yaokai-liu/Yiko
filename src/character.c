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
 * Filename: character.c
 * Creator: Yaokai Liu
 * Create Date: 2026-10-05
 * Copyright (c) 2026 Yaokai Liu. All rights reserved.
 **/

#include "character.h"
#include "modality.h"
#include "enum.h"

uint32_t Character_init(Character *character, const Allocator *allocator) {
  character->SUPER.gc_flags = YIKO_GC_FLAG_IS_ACTIVE & ~YIKO_GC_FLAG_SHOULD_REMOVE;

  const uint32_t result = Logger_init(&character->logger, allocator);
  if (result != 0) { return result; }

  character->attributes = Array_new(sizeof(Attribute), YIKO_ENTITY_ATTRIBUTE, allocator);
  character->states = Array_new(sizeof(State), YIKO_ENTITY_STATE, allocator);
  character->traits = Array_new(sizeof(Trait), YIKO_ENTITY_TRAIT, allocator);
  character->fates = Array_new(sizeof(Fate), YIKO_ENTITY_FATE, allocator);
  character->buffs = Array_new(sizeof(Buff), YIKO_ENTITY_BUFF, allocator);

  character->relationships = Array_new(sizeof(CO_PTR), YIKO_ENTITY_PTR, allocator);

  return 0;
}
