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
 * Filename: enum.h
 * Creator: Yaokai Liu
 * Create Date: 2026-10-08
 * Copyright (c) 2026 Yaokai Liu. All rights reserved.
 **/

#ifndef YIKO_ENUM_H
#define YIKO_ENUM_H
#include <stdint.h>

enum YIKO_ENTITY_TYPE : uint32_t {
  YIKO_ENTITY_NONE = 0,
  YIKO_ENTITY_PTR,
  YIKO_ENTITY_CHARACTER,
  YIKO_ENTITY_ORGANIZATION,
  YIKO_ENTITY_ITEM,

  YIKO_ENTITY_ATTRIBUTE,
  YIKO_ENTITY_STATE,
  YIKO_ENTITY_TRAIT,
  YIKO_ENTITY_FATE,
  YIKO_ENTITY_BUFF,

  YIKO_ENTITY_AGENCY,
  YIKO_ENTITY_INFRA,

  YIKO_ENTITY_RECORD,
  YIKO_ENTITY_IDENTITY,

  // mod entity type should be large than this value
  YIKO_ENTITY_BUILTIN_MAX = 0xFF,
};

enum YIKO_GC_FLAG : uint16_t {
  YIKO_GC_FLAG_NONE = 0,
  YIKO_GC_FLAG_IS_ACTIVE = 1,
  YIKO_GC_FLAG_SHOULD_REMOVE = 2,
};

enum YIKO_ENTITY_FLAG : uint16_t {
  YIKO_ENTITY_FLAG_NONE = 0,
};

enum YIKO_BUFF_FLAG : uint16_t {
  YIKO_BUFF_FLAG_NONE = 0,
};

#endif //YIKO_ENUM_H
