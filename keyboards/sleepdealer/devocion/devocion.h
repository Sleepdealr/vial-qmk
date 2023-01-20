/* Copyright 2021 Drewkeys
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
// Corresponding changes to the layout names and/or definitions must also be made to info.json

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0A │0B │0C │0D │0E │0F |0G |0H |
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┼───┼───┼───┤
 * │10   │11 │12 │13 │14 │15 │16 │17 │18 │19 │1A │1B │1C │ 1E  │1F |1G |1H |
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┴───┴───┤
 * │20    │21 │22 │23 │24 │25 │26 │27 │28 │29 │2A │2B │  2E    │           |
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤   ┌───┐   |
 * │30  │43 │31 │32 │33 │34 │35 │36 │37 │38 │39 │3A │3E    │3F │   |3G |   |
 * ├────┴┬──┼───┴─┬─┴───┴───┴───┴───┴───┴───┴───┼───┴─┬──┬─┴───┼───┼───┼───┤
 * │40   │41│42   │             45              │  4A │4C │4E  │4F |4G |4H |
 * └─────┴──┴─────┴─────────────────────────────┴─────┴──┴─────┴───┴───┴───┘
 */
#define LAYOUT_60_all( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H,  \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C,      k1E, k1F, k1G, k1H,  \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B,           k2E,                 \
    k30, k43, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A,           k3E, k3F, k3G,       \
    k40, k41, k42,                k45,                     k4A, k4C,      k4E, k4F, k4G, k4H   \
) { \
    { k00, k01,   k02, k03,   k04,   k05, k06,   k07,   k08,   k09,   k0A,   k0B,   k0C,   k0D,   k0E,   k0F,   k0G,   k0H   }, \
    { k10, k11,   k12, k13,   k14,   k15, k16,   k17,   k18,   k19,   k1A,   k1B,   k1C,   KC_NO, k1E,   k1F,   k1G,   k1H   }, \
    { k20, k21,   k22, k23,   k24,   k25, k26,   k27,   k28,   k29,   k2A,   k2B,   KC_NO, KC_NO, k2E,   KC_NO, KC_NO, KC_NO }, \
    { k30, k43,   k31, k32,   k33,   k34, k35,   k36,   k37,   k38,   k39,   k3A,   KC_NO, KC_NO, k3E,   k3F,   k3G,   KC_NO }, \
    { k40, k41,   k42, KC_NO, KC_NO, k45, KC_NO, KC_NO, KC_NO, KC_NO, k4A,   KC_NO, k4C,   KC_NO, k4E,   k4F,   k4G,   k4H   }  \
}
