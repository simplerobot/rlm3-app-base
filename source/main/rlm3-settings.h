#pragma once

#include "rlm3-base.h"


#ifdef __cplusplus
extern "C" {
#endif


// This structure defines the layout of data in the 2KB EEPROM module.
typedef struct FlashLayout
{
	uint32_t magic; // Must be 'RLM3' ? 'CNFG'?

	// Identity Config: ID / Token / Key

	// Calibrations (Already set?  Want to save on other boards?)  Biases, Scales, and Other Flags

	// WIFI Configurations.

	// Base Station Configuration (Position/direction.  Other?)

	// Long term statistics: startups.  Clean shutdown.  error counts.  Usage stats.  Battery characteristics.

	uint8_t reserved[2044];
} FlashLayout;

// This structure defines the layout of data in the external 8MB SDRAM module.
typedef struct ExternalMemoryLayout
{
	// Firmware update / file download.
	// Camera data
	// Configuration live copy.
	// Log data/buffer Additional fault data. (Sofware black box.)
	// Additional heap?
	// Mapping data?
	uint8_t reserved[8 * 1024 * 1024];
} ExternalMemoryLayout;


#ifdef __cplusplus
}
#endif
