#include "Test.hpp"
#include "rlm3-settings.h"
#include "rlm3-flash.h"
#include "rlm3-memory.h"


TEST_CASE(FlashLayout_Size)
{
	ASSERT(sizeof(FlashLayout) == RLM3_FLASH_SIZE);
}

TEST_CASE(ExternalMemoryLayout_Size)
{
	ASSERT(sizeof(ExternalMemoryLayout) == RLM3_EXTERNAL_MEMORY_SIZE);
}
