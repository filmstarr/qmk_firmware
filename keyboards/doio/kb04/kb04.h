/* Copyright 2022 filmstarr <https://github.com/filmstarr>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
 #pragma once

#include "quantum.h"
#include "print.h"

/*                        06 ◯ 05
 * ┌────┬────┬────┬────┐   ┌────┐
 * │ 00 │ 01 │ 02 │ 03 │   │ 04 │
 * └────┴────┴────┴────┘   └────┘
 */

#define LAYOUT(K00, K01, K02, K03, K04) {{ K00, K01, K02, K03, K04 }}