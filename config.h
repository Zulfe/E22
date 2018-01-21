#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/*
 * Product information.
 */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x0E22
#define DEVICE_VER 0x0001
#define MANUFACTURER TheKeebKaptain
#define PRODUCT E22
#define DESCRIPTION A numpad style keyboard with the functionality missing from the base layer of sixty-percent boards.

/*
 * Pinout configuration. You'll want to change this if you hand-soldered your board differently.
 * These pin definitions will change once a PCB has been created.
 */
#define MATRIX_ROWS 6
#define MATRIX_COLS 4
#define MATRIX_ROW_PINS { PD1, PD0, PD4, PC6, PD7, PE6 }
#define MATRIX_COL_PINS { PB1, PB3, PB2, PB6 }
#define DIODE_DIRECTION COL2ROW

#define DEBOUNCING_DELAY 5

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

#endif
