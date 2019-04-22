#include <linux/platform_device.h>
#include <linux/usb/g_hid.h>

/* hid descriptor for a gamepad */
static struct hidg_func_descriptor ghid_device_android_gamepad = {
	.subclass		= 1, /* Boot Interface Subclass */
	.protocol		= 5, /* Game Pad */
	.report_length		= 6,
	.report_desc_length	= 46,
	.report_desc		= {
		0x05, 0x01, /* USAGE_PAGE (Generic Desktop)           */
		0x09, 0x05, /* USAGE (Game Pad)                       */
		0xa1, 0x01, /* COLLECTION (Application)               */
		0xa1, 0x00, /*   COLLECTION (Physical)                */
		0x05, 0x09, /*     USAGE_PAGE (Button)                */
		0x19, 0x01, /*     USAGE_MINIMUM (Button 1)           */
		0x29, 0x10, /*     USAGE_MAXIMUM (Button 16)          */
		0x15, 0x00, /*     LOGICAL_MINIMUM (0)                */
		0x25, 0x01, /*     LOGICAL_MAXIMUM (1)                */
		0x95, 0x10, /*     REPORT_COUNT (16)                  */
		0x75, 0x01, /*     REPORT_SIZE (1)                    */
		0x81, 0x02, /*     INPUT (Data,Var,Abs)               */
		0x05, 0x01, /*     USAGE_PAGE (Generic Desktop)       */
		0x09, 0x30, /*     USAGE (X)                          */
		0x09, 0x31, /*     USAGE (Y)                          */
		0x09, 0x32, /*     USAGE (Z)                          */
		0x09, 0x33, /*     USAGE (Rx)                         */
		0x15, 0x81, /*     LOGICAL_MINIMUM (-127)             */
		0x25, 0x7f, /*     LOGICAL_MAXIMUM (127)              */
		0x75, 0x08, /*     REPORT_SIZE (8)                    */
		0x95, 0x04, /*     REPORT_COUNT (4)                   */
		0x81, 0x02, /*     INPUT (Data,Var,Abs)               */
		0xc0,       /*   END COLLECTION                       */
		0xc0        /* END COLLECTION                         */
	}
};

