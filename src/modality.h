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
 * Filename: yiko_builtin.h
 * Creator: Yaokai Liu
 * Create Date: 2026-10-06
 * Copyright (c) 2026 Yaokai Liu. All rights reserved.
 **/

#ifndef YIKO_YIKO_BUILTIN_H
#define YIKO_YIKO_BUILTIN_H
#include "yiko.h"

typedef struct Attribute {
  uint32_t type;
  uint32_t value;
} Attribute;

typedef void TraitApplyFunc(uint32_t *entity_id);
typedef void TraitRemoveFunc(uint32_t *entity_id);
typedef void TraitUpdateFunc(uint32_t *entity_id, Trait *trait_self, void *trait_matrix);

typedef struct Trait {
  const char *name;
  const char *description;
  TraitApplyFunc *apply_func;
  TraitRemoveFunc *remove_func;
} Trait;

typedef struct Fate {
  Trait SUPPER;
  TraitUpdateFunc *update_func;
} Fate;

typedef struct Buff {
  Trait SUPPER;
  TraitUpdateFunc *update_func;
  uint16_t gc_flags; // YIKO_GC_FLAGS
  uint16_t buff_flags; // YIKO_BUFF_FLAGS
} Buff;

typedef struct Skill {
  uint32_t type;
  // other data
} Skill;

#endif //YIKO_YIKO_BUILTIN_H
