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
 * Filename: context.c
 * Creator: Yaokai Liu
 * Create Date: 2026-10-08
 * Copyright (c) 2026 Yaokai Liu. All rights reserved.
 **/

#include "context.h"
#include "allocator.h"
#include "character.h"
#include "organization.h"

YikoContext *YikoContext_new(const Allocator *allocator) {
  YikoContext *context = allocator->calloc(1, sizeof(YikoContext));
  context->allocator = allocator;

  context->entity_array = Array_new(sizeof(REFER(Entity)), YIKO_ENTITY_PTR, allocator);
  context->character_array = Array_new(sizeof(Character), YIKO_ENTITY_CHARACTER, allocator);
  context->organization_array = Array_new(sizeof(Character), YIKO_ENTITY_ORGANIZATION, allocator);
  context->item_array = Array_new(sizeof(Character), YIKO_ENTITY_ITEM, allocator);

  return context;
}
