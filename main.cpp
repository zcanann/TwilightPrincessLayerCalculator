#include <iostream>

#include "LayerCalculator.h"
#include "LegacyLayerCalculator.h"
#include "MemoryFlags.h"
#include "Stages.h"

int main()
{
	// ======== CONFIG: CHANGE THESE! ========

	// Parameters
	const Stage stage = Stage::F_SP114_Snowpeak;
	const char* stageName = getStageId(stage);
	const int roomId = 0;
	const int layerOverride = -1;

	// Constants
	DAT_8042dd52 = 0; // Seems to be a constant expected to be between 0 and 5
	
	// Sets the return value of dKy_darkworld_stage_check()
	// TODO: This should technically be calculated by a function from stageName / roomId
	DARKWORLD_FLAG = false;
	
	// Absolute address flags
	setEventFlag(DAT_804069b0, 0x601, 0); // (1x) Ordon Village
	setEventFlag(DAT_804069b0, 0x602, 0); // (1x) Ordon Village
	setEventFlag(DAT_804069b0, 0x608, 0); // (2x) Kakariko Village (1x), Kakariko Grave Yard (1x)
	setEventFlag(DAT_804069b0, 0x701, 0); // (3x) Kakariko Village (1x), Kakariko Grave Yard (1x), Death Mountain (1x)
	setEventFlag(DAT_804069b0, 0x780, 0); // (1x) Ordon Village
	setEventFlag(DAT_804069b0, 0x804, 0); // (2x) Kakariko Village (1x), Kakariko Grave Yard (1x)
	setEventFlag(DAT_804069b0, 0x810, 0); // (2x) Kakariko Village (1x), Kakariko Grave Yard (1x)
	setEventFlag(DAT_804069b0, 0x902, 0); // (1x) Zora's River
	setEventFlag(DAT_804069b0, 0x904, 0); // (4x) Kakariko Village (1x), Kakariko Grave Yard (1x), Lake Hylia (1x), and Castle Town (1x)
	setEventFlag(DAT_804069b0, 0xA08, 0); // (2x) Kakariko Village (1x), Kakariko Grave Yard (1x)
	setEventFlag(DAT_804069b0, 0xB01, 0); // (1x) Zora's River
	setEventFlag(DAT_804069b0, 0xB40, 0); // (1x) Bublin Camp
	setEventFlag(DAT_804069b0, 0xC01, 0); // (5x) Lake Hylia (1x), Hyrule Field (1x), Outside Castle Town (3x)
	setEventFlag(DAT_804069b0, 0x1320, 0); // (2x) Kakariko Village (1x), Kakariko Grave Yard (1x)
	setEventFlag(DAT_804069b0, 0x1E08, 0); // (7x) Faron Woods (1x), Castle Town (2x), Hyrule Field (1x), Outside Castle Town (3x)
	setEventFlag(DAT_804069b0, 0x2004, 0); // (1x) Death Mountain
	setEventFlag(DAT_804069b0, 0x2008, 0); // (3x) Faron Woods (1x), Sacred Grove (1x), and Zora's Domain (1x)
	setEventFlag(DAT_804069b0, 0x2010, 0); // (1x) Bublin Camp
	setEventFlag(DAT_804069b0, 0x2020, 0); // (2x) Death Mountain (1x), Telma's Bar (1x)
	setEventFlag(DAT_804069b0, 0x2102, 0); // (1x) Outside Castle Town
	setEventFlag(DAT_804069b0, 0x2204, 0); // (1x) Outside Castle Town
	setEventFlag(DAT_804069b0, 0x2210, 0); // (1x) Castle Town
	setEventFlag(DAT_804069b0, 0x2320, 0); // (2x) Death Mountain (1x), Hidden Village (1x)
	setEventFlag(DAT_804069b0, 0x2B08, 0); // (1x) Bublin Camp
	setEventFlag(DAT_804069b0, 0x3B08, 0); // (1x) Lake Hylia
	setEventFlag(DAT_804069b0, 0x3120, 0); // (1x) Lake Hylia
	setEventFlag(DAT_804069b0, 0x4008, 0); // (1x) Gerudo Desert
	setEventFlag(DAT_804069b0, 0x4D08, 0); // (1x) Castle Sewers
	setEventFlag(DAT_804069b0, 0x4510, 0); // (7x) Faron Woods (2x), Ordon Village (2x), Ordon Springs (1x), Ordon Ranch (1x), Faron Cave (1x)
	setEventFlag(DAT_804069b0, 0x4A20, 0); // (1x) Ordon Spring
	setEventFlag(DAT_804069b0, 0x4A40, 0); // (3x) Ordon Village (2x), Ordon Ranch (1x)
	setEventFlag(DAT_804069b0, 0x5410, 0); // (1x) Zant Main Room

	// Variable address flags
	setEventFlag(DAT_804069b0, DAT_803a72e6, 0); // (5x) Ordon Village (3x), Ordon Spring (2x), Ordon Ranch (1x)
	setEventFlag(DAT_804069b0, DAT_803a72f2, 0); // (2x) Kakariko Village (1x), Kakariko Grave Yard (1x)
	setEventFlag(DAT_804069b0, DAT_803a72f6, 0); // (1x) Faron Woods
	setEventFlag(DAT_804069b0, DAT_803a72f8, 0); // (1x) Ordon Village
	setEventFlag(DAT_804069b0, DAT_803a7308, 0); // (1x) Death Mountain
	setEventFlag(DAT_804069b0, DAT_803a730a, 0); // (1x) Special: State E check
	setEventFlag(DAT_804069b0, DAT_803a7310, 0); // (2x) Castle Town (1x), Hyrule Field (1x)
	setEventFlag(DAT_804069b0, DAT_803a7332, 0); // (2x) Kakariko Village (1x), Kakariko Grave Yard (1x)
	setEventFlag(DAT_804069b0, DAT_803a7346, 0); // (1x) Upper Zora's River
	setEventFlag(DAT_804069b0, DAT_803a73ce, 0); // (2x) Snow Peak (1x), Snow Peak Ruins (1x)
	setEventFlag(DAT_804069b0, DAT_803a73cc, 0); // (2x) Snow Peak (1x), Snow Peak Ruins (1x)
	setEventFlag(DAT_804069b0, DAT_803a73da, 0); // (1x) Ordon Ranch
	setEventFlag(DAT_804069b0, DAT_803a749c, 0); // (2x) Snow Peak (1x), Snow Peak Ruins (1x)
	
	// "TD" Flags
	setEventFlag(DAT_80406f98, 0x601, 0); // (1x) Hyrule Field (Zora child event)
	setEventFlag(DAT_80406f98, 0x602, 0); // (1x) Hyrule Field (Zora child event)
	
	// LV Dark Cleared Flag
	setEventFlag(DAT_804061e8, 0x0, 0); // (9x) Ordon Village, Ordon Springs, Castle Sewers
	// ========== END CONFIG ============

	int layerId = getLayerId(stage, roomId, layerOverride);
	int legacyLayerId = getLayerNo_common_common(getStageId(stage), roomId, layerOverride);

	// Run the readable version
	std::cout << "Layer id for " << stageName << ": " << layerId << "\n";

		// Compare the output to the original version
	if (layerId != legacyLayerId)
	{
		std::cout << "Mismatch in layer outputs! Layer id should have been: " << legacyLayerId << "\n";
		std::cout << "This means there is likely a bug in getLayerId() which needs to be fixed.\n";
	}
}
