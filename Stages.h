#pragma once

#include <stdio.h>
#include <string.h>


const char* D_MN01 = "D_MN01";
const char* D_MN01A = "D_MN01A";
const char* D_MN01B = "D_MN01B";
const char* D_MN04 = "D_MN04";
const char* D_MN04A = "D_MN04A";
const char* D_MN04B = "D_MN04B";
const char* D_MN05 = "D_MN05";
const char* D_MN05A = "D_MN05A";
const char* D_MN05B = "D_MN05B";
const char* D_MN06 = "D_MN06";
const char* D_MN06A = "D_MN06A";
const char* D_MN06B = "D_MN06B";
const char* D_MN07 = "D_MN07";
const char* D_MN07A = "D_MN07A";
const char* D_MN07B = "D_MN07B";
const char* D_MN08 = "D_MN08";
const char* D_MN08A = "D_MN08A";
const char* D_MN08B = "D_MN08B";
const char* D_MN08C = "D_MN08C";
const char* D_MN08D = "D_MN08D";
const char* D_MN09 = "D_MN09";
const char* D_MN09A = "D_MN09A";
const char* D_MN09B = "D_MN09B";
const char* D_MN09C = "D_MN09C";
const char* D_MN10 = "D_MN10";
const char* D_MN10A = "D_MN10A";
const char* D_MN10B = "D_MN10B";
const char* D_MN11 = "D_MN11";
const char* D_MN11A = "D_MN11A";
const char* D_MN11B = "D_MN11B";
const char* D_SB00 = "D_SB00";
const char* D_SB01 = "D_SB01";
const char* D_SB02 = "D_SB02";
const char* D_SB03 = "D_SB03";
const char* D_SB04 = "D_SB04";
const char* D_SB05 = "D_SB05";
const char* D_SB06 = "D_SB06";
const char* D_SB07 = "D_SB07";
const char* D_SB08 = "D_SB08";
const char* D_SB09 = "D_SB09";
const char* D_SB10 = "D_SB10";
const char* F_SP00 = "F_SP00";
const char* F_SP102 = "F_SP102";
const char* F_SP103 = "F_SP103";
const char* F_SP104 = "F_SP104";
const char* F_SP108 = "F_SP108";
const char* F_SP109 = "F_SP109";
const char* F_SP110 = "F_SP110";
const char* F_SP111 = "F_SP111";
const char* F_SP112 = "F_SP112";
const char* F_SP113 = "F_SP113";
const char* F_SP114 = "F_SP114";
const char* F_SP115 = "F_SP115";
const char* F_SP116 = "F_SP116";
const char* F_SP117 = "F_SP117";
const char* F_SP118 = "F_SP118";
const char* F_SP121 = "F_SP121";
const char* F_SP122 = "F_SP122";
const char* F_SP123 = "F_SP123";
const char* F_SP124 = "F_SP124";
const char* F_SP125 = "F_SP125";
const char* F_SP126 = "F_SP126";
const char* F_SP127 = "F_SP127";
const char* F_SP128 = "F_SP128";
const char* F_SP200 = "F_SP200";
const char* R_SP01 = "R_SP01";
const char* R_SP107 = "R_SP107";
const char* R_SP108 = "R_SP108";
const char* R_SP109 = "R_SP109";
const char* R_SP110 = "R_SP110";
const char* R_SP115 = "R_SP115";
const char* R_SP116 = "R_SP116";
const char* R_SP127 = "R_SP127";
const char* R_SP128 = "R_SP128";
const char* R_SP160 = "R_SP160";
const char* R_SP161 = "R_SP161";
const char* R_SP209 = "R_SP209";
const char* R_SP300 = "R_SP300";
const char* R_SP301 = "R_SP301";
const char* S_MV000 = "S_MV000";

// An enum of the above constants, to allow for use of switch statements.
enum class Stage
{
	None,
	D_MN01_Lakebed_Temple,
	D_MN01A_Morpheel,
	D_MN01B_Deku_Toad,
	D_MN04_Goron_Mines,
	D_MN04A_Fyrus,
	D_MN04B_Dangoro,
	D_MN05_Forest_Temple,
	D_MN05A_Diababa,
	D_MN05B_Ook,
	D_MN06_Temple_of_Time,
	D_MN06A_Armogohma,
	D_MN06B_Darknut,
	D_MN07_City_in_the_Sky,
	D_MN07A_Argorok,
	D_MN07B_Aeralfos,
	D_MN08_Palace_of_Twilight,
	D_MN08A_Zant_Main_Room,
	D_MN08B_Phantom_Zant_1,
	D_MN08C_Phantom_Zant_2,
	D_MN08D_Zant_Fight,
	D_MN09_Hyrule_Castle,
	D_MN09A_Ganondorf_Castle,
	D_MN09B_Ganondorf_Field,
	D_MN09C_Ganondorf_Defeated,
	D_MN10_Arbiters_Grounds,
	D_MN10A_Stallord,
	D_MN10B_Death_Sword,
	D_MN11_Snowpeak_Ruins,
	D_MN11A_Blizzeta,
	D_MN11B_Darkhammer,
	D_SB00_Lanayru_Ice_Puzzle_Cave,
	D_SB01_Cave_of_Ordeals,
	D_SB02_Eldin_Long_Cave,
	D_SB03_Lake_Hylia_Long_Cave,
	D_SB04_Eldin_Goron_Stockcave,
	D_SB05_Grotto_1,
	D_SB06_Grotto_2,
	D_SB07_Grotto_3,
	D_SB08_Grotto_4,
	D_SB09_Grotto_5,
	D_SB10_Faron_Woods_Cave,
	F_SP00_Ordon_Ranch,
	F_SP102_Title_Screen,
	F_SP103_Ordon_Village,
	F_SP104_Ordon_Spring,
	F_SP108_Faron_Woods,
	F_SP109_Kakariko_Village,
	F_SP110_Death_Mountain,
	F_SP111_Kakariko_Graveyard,
	F_SP112_Zoras_River,
	F_SP113_Zoras_Domain,
	F_SP114_Snowpeak,
	F_SP115_Lake_Hylia,
	F_SP116_Castle_Town,
	F_SP117_Sacred_Grove,
	F_SP118_Bublin_Camp,
	F_SP121_Hyrule_Field,
	F_SP122_Outside_Castle_Town,
	F_SP123_Bublin_2,
	F_SP124_Gerudo_Desert,
	F_SP125_Mirror_Chamber,
	F_SP126_Upper_Zoras_River,
	F_SP127_Fishing_Pond,
	F_SP128_Hidden_Village,
	F_SP200_Hidden_Skill,
	R_SP01_Ordon_Village,
	R_SP107_Hyrule_Castle_Sewers,
	R_SP108_Faron_Woods,
	R_SP109_Kakariko_Village,
	R_SP110_Death_Mountain,
	R_SP115_Lake_Hylia,
	R_SP116_Telmas_Bar,
	R_SP127_Fishing_Pond,
	R_SP128_Hidden_Village,
	R_SP160_Castle_Town,
	R_SP161_Star_Game,
	R_SP209_Kakariko_Graveyard,
	R_SP300_Light_Arrows_Cutscene,
	R_SP301_Hyrule_Castle_Cutscenes,
	S_MV000_TP_Trailer,
};

Stage getStageEnum(const char* stageName)
{
	if (strcmp(stageName, D_MN01)) return Stage::D_MN01_Lakebed_Temple;
	if (strcmp(stageName, D_MN01A)) return Stage::D_MN01A_Morpheel;
	if (strcmp(stageName, D_MN01B)) return Stage::D_MN01B_Deku_Toad;
	if (strcmp(stageName, D_MN04)) return Stage::D_MN04_Goron_Mines;
	if (strcmp(stageName, D_MN04A)) return Stage::D_MN04A_Fyrus;
	if (strcmp(stageName, D_MN04B)) return Stage::D_MN04B_Dangoro;
	if (strcmp(stageName, D_MN05)) return Stage::D_MN05_Forest_Temple;
	if (strcmp(stageName, D_MN05A)) return Stage::D_MN05A_Diababa;
	if (strcmp(stageName, D_MN05B)) return Stage::D_MN05B_Ook;
	if (strcmp(stageName, D_MN06)) return Stage::D_MN06_Temple_of_Time;
	if (strcmp(stageName, D_MN06A)) return Stage::D_MN06A_Armogohma;
	if (strcmp(stageName, D_MN06B)) return Stage::D_MN06B_Darknut;
	if (strcmp(stageName, D_MN07)) return Stage::D_MN07_City_in_the_Sky;
	if (strcmp(stageName, D_MN07A)) return Stage::D_MN07A_Argorok;
	if (strcmp(stageName, D_MN07B)) return Stage::D_MN07B_Aeralfos;
	if (strcmp(stageName, D_MN08)) return Stage::D_MN08_Palace_of_Twilight;
	if (strcmp(stageName, D_MN08A)) return Stage::D_MN08A_Zant_Main_Room;
	if (strcmp(stageName, D_MN08B)) return Stage::D_MN08B_Phantom_Zant_1;
	if (strcmp(stageName, D_MN08C)) return Stage::D_MN08C_Phantom_Zant_2;
	if (strcmp(stageName, D_MN08D)) return Stage::D_MN08D_Zant_Fight;
	if (strcmp(stageName, D_MN09)) return Stage::D_MN09_Hyrule_Castle;
	if (strcmp(stageName, D_MN09A)) return Stage::D_MN09A_Ganondorf_Castle;
	if (strcmp(stageName, D_MN09B)) return Stage::D_MN09B_Ganondorf_Field;
	if (strcmp(stageName, D_MN09C)) return Stage::D_MN09C_Ganondorf_Defeated;
	if (strcmp(stageName, D_MN10)) return Stage::D_MN10_Arbiters_Grounds;
	if (strcmp(stageName, D_MN10A)) return Stage::D_MN10A_Stallord;
	if (strcmp(stageName, D_MN10B)) return Stage::D_MN10B_Death_Sword;
	if (strcmp(stageName, D_MN11)) return Stage::D_MN11_Snowpeak_Ruins;
	if (strcmp(stageName, D_MN11A)) return Stage::D_MN11A_Blizzeta;
	if (strcmp(stageName, D_MN11B)) return Stage::D_MN11B_Darkhammer;
	if (strcmp(stageName, D_SB00)) return Stage::D_SB00_Lanayru_Ice_Puzzle_Cave;
	if (strcmp(stageName, D_SB01)) return Stage::D_SB01_Cave_of_Ordeals;
	if (strcmp(stageName, D_SB02)) return Stage::D_SB02_Eldin_Long_Cave;
	if (strcmp(stageName, D_SB03)) return Stage::D_SB03_Lake_Hylia_Long_Cave;
	if (strcmp(stageName, D_SB04)) return Stage::D_SB04_Eldin_Goron_Stockcave;
	if (strcmp(stageName, D_SB05)) return Stage::D_SB05_Grotto_1;
	if (strcmp(stageName, D_SB06)) return Stage::D_SB06_Grotto_2;
	if (strcmp(stageName, D_SB07)) return Stage::D_SB07_Grotto_3;
	if (strcmp(stageName, D_SB08)) return Stage::D_SB08_Grotto_4;
	if (strcmp(stageName, D_SB09)) return Stage::D_SB09_Grotto_5;
	if (strcmp(stageName, D_SB10)) return Stage::D_SB10_Faron_Woods_Cave;
	if (strcmp(stageName, F_SP00)) return Stage::F_SP00_Ordon_Ranch;
	if (strcmp(stageName, F_SP102)) return Stage::F_SP102_Title_Screen;
	if (strcmp(stageName, F_SP103)) return Stage::F_SP103_Ordon_Village;
	if (strcmp(stageName, F_SP104)) return Stage::F_SP104_Ordon_Spring;
	if (strcmp(stageName, F_SP108)) return Stage::F_SP108_Faron_Woods;
	if (strcmp(stageName, F_SP109)) return Stage::F_SP109_Kakariko_Village;
	if (strcmp(stageName, F_SP110)) return Stage::F_SP110_Death_Mountain;
	if (strcmp(stageName, F_SP111)) return Stage::F_SP111_Kakariko_Graveyard;
	if (strcmp(stageName, F_SP112)) return Stage::F_SP112_Zoras_River;
	if (strcmp(stageName, F_SP113)) return Stage::F_SP113_Zoras_Domain;
	if (strcmp(stageName, F_SP114)) return Stage::F_SP114_Snowpeak;
	if (strcmp(stageName, F_SP115)) return Stage::F_SP115_Lake_Hylia;
	if (strcmp(stageName, F_SP116)) return Stage::F_SP116_Castle_Town;
	if (strcmp(stageName, F_SP117)) return Stage::F_SP117_Sacred_Grove;
	if (strcmp(stageName, F_SP118)) return Stage::F_SP118_Bublin_Camp;
	if (strcmp(stageName, F_SP121)) return Stage::F_SP121_Hyrule_Field;
	if (strcmp(stageName, F_SP122)) return Stage::F_SP122_Outside_Castle_Town;
	if (strcmp(stageName, F_SP123)) return Stage::F_SP123_Bublin_2;
	if (strcmp(stageName, F_SP124)) return Stage::F_SP124_Gerudo_Desert;
	if (strcmp(stageName, F_SP125)) return Stage::F_SP125_Mirror_Chamber;
	if (strcmp(stageName, F_SP126)) return Stage::F_SP126_Upper_Zoras_River;
	if (strcmp(stageName, F_SP127)) return Stage::F_SP127_Fishing_Pond;
	if (strcmp(stageName, F_SP128)) return Stage::F_SP128_Hidden_Village;
	if (strcmp(stageName, F_SP200)) return Stage::F_SP200_Hidden_Skill;
	if (strcmp(stageName, R_SP01)) return Stage::R_SP01_Ordon_Village;
	if (strcmp(stageName, R_SP107)) return Stage::R_SP107_Hyrule_Castle_Sewers;
	if (strcmp(stageName, R_SP108)) return Stage::R_SP108_Faron_Woods;
	if (strcmp(stageName, R_SP109)) return Stage::R_SP109_Kakariko_Village;
	if (strcmp(stageName, R_SP110)) return Stage::R_SP110_Death_Mountain;
	if (strcmp(stageName, R_SP115)) return Stage::R_SP115_Lake_Hylia;
	if (strcmp(stageName, R_SP116)) return Stage::R_SP116_Telmas_Bar;
	if (strcmp(stageName, R_SP127)) return Stage::R_SP127_Fishing_Pond;
	if (strcmp(stageName, R_SP128)) return Stage::R_SP128_Hidden_Village;
	if (strcmp(stageName, R_SP160)) return Stage::R_SP160_Castle_Town;
	if (strcmp(stageName, R_SP161)) return Stage::R_SP161_Star_Game;
	if (strcmp(stageName, R_SP209)) return Stage::R_SP209_Kakariko_Graveyard;
	if (strcmp(stageName, R_SP300)) return Stage::R_SP300_Light_Arrows_Cutscene;
	if (strcmp(stageName, R_SP301)) return Stage::R_SP301_Hyrule_Castle_Cutscenes;
	if (strcmp(stageName, S_MV000)) return Stage::S_MV000_TP_Trailer;
	return Stage::None;
}

const char* getStageId(const Stage stage)
{
	switch(stage)
	{
		case Stage::D_MN01_Lakebed_Temple: return D_MN01;
		case Stage::D_MN01A_Morpheel: return D_MN01A;
		case Stage::D_MN01B_Deku_Toad: return D_MN01B;
		case Stage::D_MN04_Goron_Mines: return D_MN04;
		case Stage::D_MN04A_Fyrus: return D_MN04A;
		case Stage::D_MN04B_Dangoro: return D_MN04B;
		case Stage::D_MN05_Forest_Temple: return D_MN05;
		case Stage::D_MN05A_Diababa: return D_MN05A;
		case Stage::D_MN05B_Ook: return D_MN05B;
		case Stage::D_MN06_Temple_of_Time: return D_MN06;
		case Stage::D_MN06A_Armogohma: return D_MN06A;
		case Stage::D_MN06B_Darknut: return D_MN06B;
		case Stage::D_MN07_City_in_the_Sky: return D_MN07;
		case Stage::D_MN07A_Argorok: return D_MN07A;
		case Stage::D_MN07B_Aeralfos: return D_MN07B;
		case Stage::D_MN08_Palace_of_Twilight: return D_MN08;
		case Stage::D_MN08A_Zant_Main_Room: return D_MN08A;
		case Stage::D_MN08B_Phantom_Zant_1: return D_MN08B;
		case Stage::D_MN08C_Phantom_Zant_2: return D_MN08C;
		case Stage::D_MN08D_Zant_Fight: return D_MN08D;
		case Stage::D_MN09_Hyrule_Castle: return D_MN09;
		case Stage::D_MN09A_Ganondorf_Castle: return D_MN09A;
		case Stage::D_MN09B_Ganondorf_Field: return D_MN09B;
		case Stage::D_MN09C_Ganondorf_Defeated: return D_MN09C;
		case Stage::D_MN10_Arbiters_Grounds: return D_MN10;
		case Stage::D_MN10A_Stallord: return D_MN10A;
		case Stage::D_MN10B_Death_Sword: return D_MN10B;
		case Stage::D_MN11_Snowpeak_Ruins: return D_MN11;
		case Stage::D_MN11A_Blizzeta: return D_MN11A;
		case Stage::D_MN11B_Darkhammer: return D_MN11B;
		case Stage::D_SB00_Lanayru_Ice_Puzzle_Cave: return D_SB00;
		case Stage::D_SB01_Cave_of_Ordeals: return D_SB01;
		case Stage::D_SB02_Eldin_Long_Cave: return D_SB02;
		case Stage::D_SB03_Lake_Hylia_Long_Cave: return D_SB03;
		case Stage::D_SB04_Eldin_Goron_Stockcave: return D_SB04;
		case Stage::D_SB05_Grotto_1: return D_SB05;
		case Stage::D_SB06_Grotto_2: return D_SB06;
		case Stage::D_SB07_Grotto_3: return D_SB07;
		case Stage::D_SB08_Grotto_4: return D_SB08;
		case Stage::D_SB09_Grotto_5: return D_SB09;
		case Stage::D_SB10_Faron_Woods_Cave: return D_SB10;
		case Stage::F_SP00_Ordon_Ranch: return F_SP00;
		case Stage::F_SP102_Title_Screen: return F_SP102;
		case Stage::F_SP103_Ordon_Village: return F_SP103;
		case Stage::F_SP104_Ordon_Spring: return F_SP104;
		case Stage::F_SP108_Faron_Woods: return F_SP108;
		case Stage::F_SP109_Kakariko_Village: return F_SP109;
		case Stage::F_SP110_Death_Mountain: return F_SP110;
		case Stage::F_SP111_Kakariko_Graveyard: return F_SP111;
		case Stage::F_SP112_Zoras_River: return F_SP112;
		case Stage::F_SP113_Zoras_Domain: return F_SP113;
		case Stage::F_SP114_Snowpeak: return F_SP114;
		case Stage::F_SP115_Lake_Hylia: return F_SP115;
		case Stage::F_SP116_Castle_Town: return F_SP116;
		case Stage::F_SP117_Sacred_Grove: return F_SP117;
		case Stage::F_SP118_Bublin_Camp: return F_SP118;
		case Stage::F_SP121_Hyrule_Field: return F_SP121;
		case Stage::F_SP122_Outside_Castle_Town: return F_SP122;
		case Stage::F_SP123_Bublin_2: return F_SP123;
		case Stage::F_SP124_Gerudo_Desert: return F_SP124;
		case Stage::F_SP125_Mirror_Chamber: return F_SP125;
		case Stage::F_SP126_Upper_Zoras_River: return F_SP126;
		case Stage::F_SP127_Fishing_Pond: return F_SP127;
		case Stage::F_SP128_Hidden_Village: return F_SP128;
		case Stage::F_SP200_Hidden_Skill: return F_SP200;
		case Stage::R_SP01_Ordon_Village: return R_SP01;
		case Stage::R_SP107_Hyrule_Castle_Sewers: return R_SP107;
		case Stage::R_SP108_Faron_Woods: return R_SP108;
		case Stage::R_SP109_Kakariko_Village: return R_SP109;
		case Stage::R_SP110_Death_Mountain: return R_SP110;
		case Stage::R_SP115_Lake_Hylia: return R_SP115;
		case Stage::R_SP116_Telmas_Bar: return R_SP116;
		case Stage::R_SP127_Fishing_Pond: return R_SP127;
		case Stage::R_SP128_Hidden_Village: return R_SP128;
		case Stage::R_SP160_Castle_Town: return R_SP160;
		case Stage::R_SP161_Star_Game: return R_SP161;
		case Stage::R_SP209_Kakariko_Graveyard: return R_SP209;
		case Stage::R_SP300_Light_Arrows_Cutscene: return R_SP300;
		case Stage::R_SP301_Hyrule_Castle_Cutscenes: return R_SP301;
		case Stage::S_MV000_TP_Trailer: return S_MV000;
		case Stage::None: default: return nullptr;
	}
}
