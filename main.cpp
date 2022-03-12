#include <iostream>

#include "LayerCalculator.h"
#include "LegacyLayerCalculator.h"
#include "MemoryFlags.h"
#include "Stages.h"

int main()
{
	// ======== Config: Change these! ========

	// Parameters
	const Stage stage = Stage::F_SP114_Snowpeak;
	const int roomId = 0;
	const int layerOverride = -1;

	// Constants
	DAT_8042dd52 = 5;
	DARKWORLD_FLAG = false; // This should technically be calculated by a function from stageName / roomId, but for now hard code it.
	
	// Define absolute address flags
	setEventFlag(DAT_804069b0, 0x601, 0); // Used 1x in Ordon Village
	setEventFlag(DAT_804069b0, 0x602, 0); // Used 1x in Ordon Village
	setEventFlag(DAT_804069b0, 0x608, 0); // Used 1x in Kakariko Grave Yard
	setEventFlag(DAT_804069b0, 0x701, 0); // Used 2x in Kakariko Grave Yard, Death Mountain
	setEventFlag(DAT_804069b0, 0x780, 0); // Used 1x in Ordon Village
	setEventFlag(DAT_804069b0, 0x804, 0); // Used 1x in Kakariko Grave Yard
	setEventFlag(DAT_804069b0, 0x810, 0); // Used 1x in Kakariko Grave Yard
	setEventFlag(DAT_804069b0, 0x902, 0); // Used 1x in Zora's River
	setEventFlag(DAT_804069b0, 0x904, 0); // Used 3x in Kakariko Grave Yard, Lake Hylia, and Castle Town
	setEventFlag(DAT_804069b0, 0xA08, 0); // Used 1x in Kakariko Grave Yard
	setEventFlag(DAT_804069b0, 0xB01, 0); // Used 1x in Zora's River
	setEventFlag(DAT_804069b0, 0xB40, 0); // Used 1x in Bublin Camp
	setEventFlag(DAT_804069b0, 0xC01, 0); // Used 5x in Lake Hylia (1x), Hyrule Field (1x), Outside Castle Town (3x)
	setEventFlag(DAT_804069b0, 0x1320, 0); // Used 1x in Kakariko Grave Yard
	setEventFlag(DAT_804069b0, 0x1E08, 0); // Used 7x in Faron Woods (1x), Castle Town (2x), Hyrule Field (1x), Outside Castle Town (3x)
	setEventFlag(DAT_804069b0, 0x2008, 0); // Used 3x in Faron Woods (1x), Sacred Grove (1x), and Zora's Domain (1x)
	setEventFlag(DAT_804069b0, 0x2004, 0);
	setEventFlag(DAT_804069b0, 0x2010, 0);
	setEventFlag(DAT_804069b0, 0x2020, 0);
	setEventFlag(DAT_804069b0, 0x2320, 0);
	setEventFlag(DAT_804069b0, 0x3b08, 0);
	setEventFlag(DAT_804069b0, 0x3120, 0);
	setEventFlag(DAT_804069b0, 0x4008, 0);
	setEventFlag(DAT_804069b0, 0x4A40, 0);
	setEventFlag(DAT_804069b0, 0x4D08, 0);
	setEventFlag(DAT_804069b0, 0x2204, 0);
	setEventFlag(DAT_804069b0, 0x2102, 0);
	setEventFlag(DAT_804069b0, 0x2210, 0);
	setEventFlag(DAT_804069b0, 0x2B08, 0);
	setEventFlag(DAT_804069b0, 0x4510, 0);
	setEventFlag(DAT_804069b0, 0x4A20, 0);
	setEventFlag(DAT_804069b0, 0x4A40, 0);
	setEventFlag(DAT_804069b0, 0x5410, 0);

	// Define variable address flags
	setEventFlag(DAT_804069b0, DAT_803a749c, 0);
	setEventFlag(DAT_804069b0, DAT_803a73ce, 0);
	setEventFlag(DAT_804069b0, DAT_803a73cc, 0);
	setEventFlag(DAT_804069b0, DAT_803a72f6, 0);
	setEventFlag(DAT_804069b0, DAT_803a7332, 0);
	setEventFlag(DAT_804069b0, DAT_803a72f2, 0);
	setEventFlag(DAT_804069b0, DAT_803a7308, 0);
	setEventFlag(DAT_804069b0, DAT_803a7310, 0); // Shared 2x
	setEventFlag(DAT_804069b0, DAT_803a7346, 0);
	setEventFlag(DAT_804069b0, DAT_803a72e6, 0); // Shared 5x
	setEventFlag(DAT_804069b0, DAT_803a72f8, 0);
	setEventFlag(DAT_804069b0, DAT_803a73da, 0);
	setEventFlag(DAT_804069b0, DAT_803a730a, 0);
	
	// "TD" Flags
	setEventFlag(DAT_80406f98, 0x601, 0); // Zora child event
	setEventFlag(DAT_80406f98, 0x602, 0); // Zora child event
	
	// ?? Flag
	setEventFlag(DAT_804061e8, 0x0, 0);
	// =======================================

	int layerId = getLayerId(stage, roomId, layerOverride);
	int legacyLayerId = getLayerNo_common_common(getStageId(stage), roomId, layerOverride));

	// Run the readable version
	std::cout << "Layer: " << getLayerId(stage, roomId, layerOverride) << "\n";

	// Compare the output to
	std::cout << "Legacy function (should match): " << legacyLayerId << "\n";
}
