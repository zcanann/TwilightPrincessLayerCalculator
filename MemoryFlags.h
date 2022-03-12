#pragma once

#include <map>

#include "Stages.h"

typedef int* dSv_event_c;
typedef int* dSv_player_status_b_c;

// Memory regions referenced by original code. For the purposes of this calculator, these are used as
// a key into a dictionary, rather than a pointer to a valid block of memory.
inline int* DAT_804069b0 = (int*)1;
inline int* DAT_804061e8 = (int*)2;
inline int* DAT_80406f98 = (int*)3;

// Bits referenced by orignal code. For this calculator, these just need to be unique values.
// Note: I make the assumption that these do not collide with hard coded flag offsets in the original code
// If this assumption turns out to be false, this calculator may produce invalid results in rare situations.
inline int DAT_803a749c = 0xBADF00D0;
inline int DAT_803a73ce = 0xBADF00D1;
inline int DAT_803a73cc = 0xBADF00D2;
inline int DAT_803a72f6 = 0xBADF00D3;
inline int DAT_803a7332 = 0xBADF00D4;
inline int DAT_803a72f2 = 0xBADF00D5;
inline int DAT_803a7308 = 0xBADF00D6;
inline int DAT_803a7310 = 0xBADF00D7;
inline int DAT_803a7346 = 0xBADF00D8;
inline int DAT_803a72e6 = 0xBADF00D9;
inline int DAT_803a72f8 = 0xBADF00DA;
inline int DAT_803a73da = 0xBADF00DB;
inline int DAT_803a730a = 0xBADF00DC;

// Global configurable params
inline int DARKWORLD_FLAG = 0;
inline int DAT_8042dd52 = 0;

static std::map<int*, std::map<int, bool>> memoryRegionFlags = { };

bool dKy_darkworld_stage_check(const char *stageName, int roomId)
{
	return DARKWORLD_FLAG;
}

bool dKy_darkworld_stage_check(Stage stage, int roomId)
{
	return dKy_darkworld_stage_check(getStageId(stage), roomId);
}

void dComIfG_get_timelayer(int layer)
{
	// Do nothing?
}

void setEventFlag(int* memoryRegion, int flagIdentifier, bool value)
{
	if (memoryRegionFlags.find(memoryRegion) == memoryRegionFlags.end())
	{
		memoryRegionFlags[memoryRegion] = { };
	}

	memoryRegionFlags[memoryRegion][flagIdentifier] = value;
}

bool isEventBit(int** memoryRegionPtr, int flagIdentifier)
{
	int* memoryRegion = nullptr;
	
	if (memoryRegionPtr)
	{
		memoryRegion = *memoryRegionPtr;
	}
	
	if (memoryRegionFlags.find(memoryRegion) != memoryRegionFlags.end())
	{
		std::map<int, bool>& flagMap = memoryRegionFlags[memoryRegion];

		if (flagMap.find(flagIdentifier) != flagMap.end())
		{
			return flagMap[flagIdentifier];
		}
		else
		{
  		std::cout << "Warning: flag identifier not found: " << flagIdentifier << "\n";
  		std::cout << "This means the C++ code is checking for a bit flag that was not specified. It will be assumed false.\n";
		}
	}
	else
	{
  	std::cout << "Warning: memory region not found: " << memoryRegion << "\n";
		std::cout << "This means the C++ code is checking a flag in an known bit field. Assuming the value would have been false.\n";
	}
	return false;
}

bool isDarkClearLV(int** memoryRegion, int flagIdentifier)
{
	return isEventBit(memoryRegion, flagIdentifier);	
}

bool isTransformLV(int** memoryRegion, int flagIdentifier)
{
	return isEventBit(memoryRegion, flagIdentifier);	
}
