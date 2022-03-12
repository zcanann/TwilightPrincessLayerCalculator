#include "Stages.h"

int getLayerId(Stage stage, int roomId, int layerOverride)
{
	int chosenLayer = -1;

	if ((char)layerOverride >= 0)
	{
		goto stateECheck;
	}

	if (dKy_darkworld_stage_check(stageName, roomId))
	{
		chosenLayer = 0xE;
	}

	if (chosenLayer >= 0xD)
	{   
		goto stateECheck;
	}

	switch(stage)
	{
		case Stage::D_MN11_Snowpeak_Ruins:
		case Stage::F_SP114_Snowpeak:
		{
				if (!isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a749c))
				{
						if (!isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a73ce))
						{
								if (isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a73cc))
								{
										chosenLayer = 1;
								}
						}
						else
						{
								chosenLayer = 2;
						}
				}
				else
				{
						chosenLayer = 3;
				}
				break;
		}
		case Stage::F_SP108_Faron_Woods:
		{
				if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x2008))
				{
						if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x1E08))
						{
								if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x602))
								{
										if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x4510))
										{
												chosenLayer = 1;
										}
								}
								else
								{
										chosenLayer = 2;
								}
						}
						else
						{
								chosenLayer = 3;
						}
				}
				else
				{
						chosenLayer = 5;
				}
				break;
		}
		case Stage::R_SP108_Faron_Woods:
		{
				if (!isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a72f6))
				{
						if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x4510))
						{
								chosenLayer = 1;
						}
				}
				else
				{
						chosenLayer = 2;
				}
				break;
		}
		case Stage::F_SP109_Kakariko_Village:
		case Stage::F_SP111_Kakariko_Graveyard:
		{
				if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x804))
				{
						if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x810))
						{
								if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x1320))
								{
										if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x701))
										{
												if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0xA08))
												{
														if (isEventBit((dSv_event_c *)&DAT_804069b0, 0x608))
														{
																chosenLayer = 1;
														}
												}
												else
												{
														chosenLayer = 2;
														dComIfG_get_timelayer(chosenLayer);
												}
										}
										else
										{
												chosenLayer = 0xc;
										}
								}
								else
								{
										chosenLayer = 2;
										dComIfG_get_timelayer(chosenLayer);
								}
						}
						else
						{
								chosenLayer = 4;
						}
				}
				else
				{
						chosenLayer = 2;
						dComIfG_get_timelayer(chosenLayer);
				}
				break;
		}
		case Stage::R_SP109_Kakariko_Village:
		case Stage::R_SP209_Kakariko_Graveyard:
		{
				if (stage == Stage::R_SP109_Kakariko_Village && roomId == 1 && isEventBit((dSv_event_c *)&DAT_804069b0, 0x904))
				{
						chosenLayer = 4;
						dComIfG_get_timelayer(chosenLayer);
				}
				else
				{
						if (!isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a7332))
						{
								if (isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a72f2))
								{
										chosenLayer = 1;
								}
						}
						else
						{
								chosenLayer = 2;
								dComIfG_get_timelayer(chosenLayer);
						}
				}
				break;
		}
		case Stage::F_SP110_Death_Mountain:
		{
				if (isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a7308))
				{
						chosenLayer = 2;
				}
				break;
		}
		case Stage::R_SP110_Death_Mountain:
		{
				if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x2320))
				{
						if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x2004))
						{
								if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x2020))
								{
										if (isEventBit((dSv_event_c *)&DAT_804069b0, 0x701))
										{
												chosenLayer = 1;
										}
								}
								else
								{
										chosenLayer = 2;
								}
						}
						else
						{
								chosenLayer = 4;
						}
				}
				else
				{
						chosenLayer = 3;
				}
				break;
		}
		case Stage::F_SP115_Lake_Hylia:
		case Stage::F_SP116_Castle_Town:
		case Stage::R_SP116_Telmas_Bar:
		case Stage::R_SP115_Lake_Hylia:
		{
				if (stage == Stage::F_SP115_Lake_Hylia && roomId == 0)
				{
						if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x3b08))
						{
								if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x3120))
								{
										if (isEventBit((dSv_event_c *)&DAT_804069b0, 0x904))
										{
												chosenLayer = 2;
										}
								}
								else
								{
										chosenLayer = 1;
								}
						}
						else
						{
								chosenLayer = 3;
						}
				}
				else if (stage == Stage::R_SP116_Telmas_Bar && roomId == 5 && isEventBit((dSv_event_c *)&DAT_804069b0, 0x2020))
				{
						chosenLayer = 4;
				}
				else if (stage == Stage::F_SP116_Castle_Town || !isEventBit((dSv_event_c *)&DAT_804069b0, 0x1e08))
				{
						if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x904))
						{
								if (stage == Stage::F_SP116_Castle_Town && roomId == 3 && isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a7310))
								{
										chosenLayer = 1;
								}
						}
						else
						{
								if (stage == Stage::F_SP115_Lake_Hylia && roomId == 1 && !isEventBit((dSv_event_c *)&DAT_804069b0, 0xc01))
								{
										chosenLayer = 9;
								}
								else
								{
										chosenLayer = 2;
								}
						}
				}
				else if (stage == Stage::R_SP115_Lake_Hylia)
				{
						if (roomId == 4 || roomId == 3 || roomId == 1)
						{
								chosenLayer = 1;
						}
						else
						{
								chosenLayer = 0;
						}
				}
				break;
		}
		case Stage::F_SP113_Zoras_Domain:
		{
				if (isEventBit((dSv_event_c *)&DAT_804069b0, 0x2008))
				{
						chosenLayer = 2;
				}
				break;
		}
		case Stage::F_SP126_Upper_Zoras_River:
		{
				if (isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a7346))
				{
						chosenLayer = 1;
				}
				break;
		}
		case Stage::F_SP124_Gerudo_Desert:
		{
				if (roomId == 0)
				{
						chosenLayer = 8;
						if (isEventBit((dSv_event_c *)&DAT_804069b0, 0x4008))
						{
								chosenLayer = 0;
						}
				}
				break;
		}
		case Stage::F_SP112_Zoras_River:
		{
				if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0xB01))
				{
						if (isEventBit((dSv_event_c *)&DAT_804069b0, 0x902))
						{
								chosenLayer = 2;
						}
				}
				else
				{
						chosenLayer = 1;
				}
				break;
		}
		case Stage::F_SP103_Ordon_Village:
		{
				if (roomId == 0)
				{
						if (!isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a72f8))
						{
								if (!isDarkClearLV((dSv_player_status_b_c *)&DAT_804061e8, 0))
								{
										if (!isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a72e6))
										{
												if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x4510))
												{
														if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x4A40))
														{
																chosenLayer = 6;
														}
														else
														{
																chosenLayer = 0;
														}
												}
												else
												{
														chosenLayer = 7;
												}
										}
										else {
												chosenLayer = 1;
										}
								}
								else
								{
										chosenLayer = 2;
										dComIfG_get_timelayer(chosenLayer);
								}
						}
						else
						{
								chosenLayer = 4;
								dComIfG_get_timelayer(chosenLayer);
						}
				}
				else
				{
						if (roomId == 1)
						{
								if (!isDarkClearLV((dSv_player_status_b_c *)&DAT_804061e8, 0))
								{
										if (!isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a72e6))
										{
												if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x4510))
												{
														if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x4a40))
														{
																chosenLayer = 3;
														}
														else
														{
																chosenLayer = 4;
														}
												}
												else
												{
														chosenLayer = 0;
												}
										}
										else
										{
												chosenLayer = 1;
										}
								}
								else
								{
										chosenLayer = 2;
								}
						}
				}
				break;
		}
		case Stage::R_SP01_Ordon_Village:
		{
				if (roomId == 1)
				{
						if (isDarkClearLV((dSv_player_status_b_c *)&DAT_804061e8, 0))
						{
								chosenLayer = 2;
						}
				}
				else
				{
						if (roomId == 2)
						{
								if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x780))
								{
										if (!isDarkClearLV((dSv_player_status_b_c *)&DAT_804061e8, 0))
										{
												if (isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a72e6))
												{
														chosenLayer = 1;
												}
										}
										else
										{
												chosenLayer = 2;
										}
								}
								else
								{
										chosenLayer = 3;
								}
						}
						else
						{
								if (roomId == 5)
								{
										if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x601))
										{
												if (isDarkClearLV((dSv_player_status_b_c *) &DAT_804061e8, 0))
												{
														chosenLayer = 2;
												}
										}
										else
										{
												chosenLayer = 4;
										}
								}
						}
				}
				break;
		}
		case Stage::F_SP104_Ordon_Spring:
		{
				if (roomId == 1)
				{
						if (!isDarkClearLV((dSv_player_status_b_c *)&DAT_804061e8, 0))
						{
								if (!isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a72e6))
								{
										if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x4510))
										{
												if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x4a20))
												{
														chosenLayer = 1;
												}
												else
												{
														chosenLayer = 3;
												}
										}
										else
										{
												chosenLayer = 0;
										}
								}
								else
								{
										chosenLayer = 4;
								}
						}
						else
						{
								chosenLayer = 2;
						}
				}
				else
				{
						if (!isDarkClearLV((dSv_player_status_b_c *)&DAT_804061e8, 0))
						{
								if (isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a72e6))
								{
										chosenLayer = 4;
								}
						}
						else
						{
								chosenLayer = 2;
						}
				}
				break;
		}
		case Stage::F_SP00_Ordon_Ranch:
		{
				if (!isDarkClearLV((dSv_player_status_b_c *)&DAT_804061e8, 0))
				{
						if (!isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a72e6))
						{
								if (!isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a73da))
								{
										if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x4510))
										{
												if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x4a40))
												{
														chosenLayer = 0xc;
												}
												else
												{
														chosenLayer = 0xb;
												}
										}
										else
										{
												chosenLayer = 9;
										}
								}
								else
								{
										chosenLayer = 10;
								}
						}
						else
						{
								chosenLayer = 1;
						}
				}
				else
				{
						chosenLayer = 2;
						dComIfG_get_timelayer(chosenLayer);
				}
				break;
		}
		case Stage::F_SP121_Hyrule_Field:
		{
				if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x1E08))
				{
						if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0xC01))
						{
								if (!isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a7310))
								{
										if (isEventBit((dSv_event_c *)&DAT_80406f98, 0x601))
										{
												if (!isEventBit((dSv_event_c *)&DAT_80406f98, 0x602))
												{
														chosenLayer = 3;
												}
												else
												{
														chosenLayer = 2;
												}
										}
								}
								else
								{
										chosenLayer = 0;
								}
						}
						else
						{
								chosenLayer = 4;
						}
				}
				else
				{
						chosenLayer = 6;
				}
				break;
		}
		case Stage::F_SP122_Outside_Castle_Town:
		{
			if (roomId == 8)
			{
					if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x1E08))
					{
							if (isEventBit((dSv_event_c *)&DAT_804069b0, 0xC01))
							{
									chosenLayer = 4;
							}
					}
					else
					{
							chosenLayer = 6;
					}
			}
			else
			{
				if (roomId == 0x10)
				{
						if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x2204))
						{
								if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x2102))
								{
										if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x1E08))
										{
												if (isEventBit((dSv_event_c *)&DAT_804069b0, 0xC01))
												{
														chosenLayer = 4;
												}
										}
										else
										{
												chosenLayer = 6;
										}
								}
								else
								{
										chosenLayer = 1;
								}
						}
						else
						{
								chosenLayer = 6;
						}
				}
				else
				{
						if (roomId == 0x11)
						{
								if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x1E08))
								{
										if (isEventBit((dSv_event_c *)&DAT_804069b0, 0xC01))
										{
												chosenLayer = 4;
										}
								}
								else
								{
										chosenLayer = 0;
								}
						}
				}
			}
			break;
		}
		case Stage::F_SP128_Hidden_Village:
		{
			if (isEventBit((dSv_event_c *)&DAT_804069b0, 0x2320))
			{
				chosenLayer = 1;
			}
			break;
		}
		case Stage::R_SP160_Castle_Town:
		{
			if (roomId == 5)
			{
				if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x1E08))
				{
					chosenLayer = 1;
				}
				else
				{
					chosenLayer = 0;
				}
			}
			else
			{
				if (isEventBit((dSv_event_c *)&DAT_804069b0, 0x2210))
				{
					chosenLayer = 1;
				}
			}
			break;
		}
		case Stage::F_SP117_Sacred_Grove:
		{
			if (isEventBit((dSv_event_c *)&DAT_804069b0, 0x2008))
			{
				chosenLayer = 2;
			}
			break;
		}
		case Stage::F_SP118_Bublin_Camp:
		{
			if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x2b08))
			{
				if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x2010))
				{
					if (isEventBit((dSv_event_c *)&DAT_804069b0, 0xb40))
					{
						chosenLayer = 1;
					}
				}
				else
				{
					chosenLayer = 2;
				}
			}
			else
			{
				chosenLayer = 3;
			}
			break;
		}
		case Stage::D_SB10_Faron_Woods_Cave:
		{
			if (isEventBit((dSv_event_c *)&DAT_804069b0, 0x4510))
			{
				chosenLayer = 1;
			}
			break;
		}
		case Stage::R_SP107_Hyrule_Castle_Sewers:
		{
			if (isTransformLV((dSv_player_status_b_c *)&DAT_804061e8, 3))
			{
				chosenLayer = 0xd;
			}
			break;
		}
		case Stage::D_MN09_Hyrule_Castle:
		{
			if (roomId != 0xB && roomId != 0xD && roomId != 0xE)
			{
				chosenLayer = 1;
			}
			break;
		}
		case Stage::F_SP127_Fishing_Pond:
		case Stage::R_SP127_Fishing_Pond:
		{
			if (DAT_8042dd52 == 3)
			{
				chosenLayer = 2;
			}
			else
			{
				if (DAT_8042dd52 < 3)
				{
					if (DAT_8042dd52 == 1)
					{
						chosenLayer = 0;
					}
					else
					{
						if (DAT_8042dd52 != 0)
						{
							chosenLayer = 1;
						}
					}
				}
				else
				{
					if (DAT_8042dd52 < 5)
					{
						chosenLayer = 3;
					}
				}
			}
			break;
		}
	}

stateECheck:
	if (chosenLayer == 0xE)
	{
		if (isEventBit((dSv_event_c *)&DAT_804069b0, DAT_803a730a))
		{
			switch(stage)
			{
				case Stage::F_SP112_Zoras_River:
				case Stage::F_SP113_Zoras_Domain:
				case Stage::F_SP115_Lake_Hylia:
				case Stage::F_SP116_Castle_Town:
				case Stage::R_SP115_Lake_Hylia:
				case Stage::F_SP126_Upper_Zoras_River:
				case Stage::F_SP122_Outside_Castle_Town:
				{
					chosenLayer = 0xD;
					break;
				}
				case Stage::R_SP116_Telmas_Bar:
				{
					if (roomId == 5)
					{
						chosenLayer = 0xD;
					}
					break;
				}
				case Stage::F_SP121_Hyrule_Field:
				{
					if (roomId > 8 && roomId < 0xF)
					{
						chosenLayer = 0xD;
					}
					break;
				}
			}
		}

		if (stage == Stage::R_SP107_Hyrule_Castle_Sewers && roomId == 0)
		{
			if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x4D08))
			{
				chosenLayer = 0xB;
			}
		}
		else if (stage == Stage::D_MN08A_Zant_Main_Room && roomId == 10)
		{
				if (!isEventBit((dSv_event_c *)&DAT_804069b0, 0x5410))
				{
					chosenLayer = 0;
				}
				else
				{
					chosenLayer = 1;
				}
		}
	}

	return chosenLayer;
}
