#ifndef __RCAR3_XEN_H
#define __RCAR3_XEN_H

#include "rcar-gen3-common.h"

#define CONFIG_LNX_KRNL_IMG_TEXT_OFFSET_BASE    CONFIG_SYS_LOAD_ADDR

#undef CFG_EXTRA_ENV_SETTINGS
#define CFG_EXTRA_ENV_SETTINGS		\
	"fdt_high=0xffffffff\0"		\
	"initrd_high=0xffffffff\0"

#endif /* __RCAR3_XEN_H */
