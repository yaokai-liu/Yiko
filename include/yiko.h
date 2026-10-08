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
 * Module Name: include
 * Filename: yiko.h
 * Creator: Yaokai Liu
 * Create Date: 2026-10-05
 * Copyright (c) 2026 Yaokai Liu. All rights reserved.
 **/

#ifndef YIKO_YIKO_H
#define YIKO_YIKO_H
#include <stdint.h>
#include "array.h"
#include "avl-tree.h"

typedef struct Character /*extend Entity*/ Character;
typedef struct Organization /*extend Entity*/ Organization;
typedef struct Item /*extend Entity*/ Item;
typedef struct Logger Logger;

typedef struct Attribute Attribute;
typedef struct Trait Trait;
typedef struct Fate /*extend Trait*/ Fate;
typedef struct Buff /*extend Trait*/ Buff;
typedef struct Skill Skill;

typedef void TraitApplyFunc(uint32_t *entity_id);
typedef void TraitRemoveFunc(uint32_t *entity_id);
typedef void TraitUpdateFunc(uint32_t *entity_id, Trait *trait_self, void *trait_matrix);

#endif //YIKO_YIKO_H
