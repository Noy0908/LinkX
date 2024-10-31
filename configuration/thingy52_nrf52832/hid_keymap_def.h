/*
 * Copyright (c) 2019 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

#include "hid_keymap.h"
#include <caf/key_id.h>

/* This configuration file is included only once from hid_state module and holds
 * information about mapping between buttons and generated reports.
 */

/* This structure enforces the header file is included only once in the build.
 * Violating this requirement triggers a multiple definition error at link time.
 */
const struct {} hid_keymap_def_include_once;

/*
 * HID keymap. The Consumer Control keys are defined in section 15 of
 * the HID Usage Tables document under the following URL:
 * https://www.usb.org/sites/default/files/hut1_12.pdf
 */
static const struct hid_keymap hid_keymap[] = {
	{ KEY_ID(0x00, 0x01), 0x00E0, REPORT_ID_KEYBOARD_KEYS }, // left control
    { KEY_ID(0x00, 0x02), 0x000F, REPORT_ID_KEYBOARD_KEYS }, //  L
    { KEY_ID(0x00, 0x03), 0x000B, REPORT_ID_KEYBOARD_KEYS }, //  H
//    { KEY_ID(0x00, 0x04), 0x01, REPORT_ID_MOUSE }, // left Mouse click 
    { KEY_ID(0x00, 0x04), 0x004F, REPORT_ID_KEYBOARD_KEYS }, // right arrow
    { KEY_ID(0x00, 0x05), 0x0050, REPORT_ID_KEYBOARD_KEYS }, //  left arrow
	
};
