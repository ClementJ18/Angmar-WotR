//-------------------------------------------------------------------------------------------------
// This file is meant to be included for those campaigns that share a common region list.
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
// Territory definitions
//-------------------------------------------------------------------------------------------------

;////////// Missionsgebiete ///////

;////////////////////////////
;// Angmar (1)
;////////////////////////////
Region Angmar
	DisplayName				= LW:DisplayNameAngmar
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map kampa angmar 01"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Angmar_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Angmar
	RegionPortrait			= LWPAngmar

	;ArmyBonus				= 0
	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus				= 5
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=


	CustomCenterPoint			= Yes
	CenterPoint				= X:-65 Y:2085

    HeroArmySpot				= X:-180 Y:2125
    HeroArmySpot				= X:-45 Y:2095
    HeroArmySpot				= X:85 Y:2025
    HeroArmySpot				= X:25 Y:2095
    GarrisonArmySpot			= X:-60 Y:2015
    ;BuildingSpot				= X:20 Y:2010
    ;BuildingSpot				= X:-140 Y:2085

    CPLimit					= 1500
    AllyCPLimit				= 1000
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 0
	End
End


;////////////////////////////
;// Gundabad (2)
;////////////////////////////
Region MountGundabad
	DisplayName			= LW:DisplayNameMountGundabad
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName				= "map kampa angmar 02"
	MovieNameFirstTime		= Angmar_Campaign_M2Open
	MovieNameRepeat		= Angmar_Campaign_M2Open
	SkirmishStillImage		= CampaignAngmar_Gundabad_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroNurn1
	SkirmishMusicTrack		= R_BbEvil105
	SubObject			= MOUNT_GUNDABAD
	RegionPortrait			= LWPMountGundabad

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus				= 5
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo			=

	CustomCenterPoint		= Yes
	CenterPoint			= X:421 Y:2367

	HeroArmySpot			= X:675 Y:2342
	HeroArmySpot			= X:533 Y:2449
	HeroArmySpot			= X:505 Y:2343
	HeroArmySpot			= X:406 Y:2463

	GarrisonArmySpot		= X:363 Y:2346

	;BuildingSpot			= X:326 Y:2440
	;BuildingSpot			= X:593 Y:2377

        CPLimit				        = 1500
        AllyCPLimit				= 1000
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 0
	End
End

;////////////////////////////
;// Rhudaur (3)
;////////////////////////////
Region Rhudaur
	DisplayName				= LW:DisplayNameRhudaur
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map kampa angmar 03"
	MovieNameFirstTime		= Angmar_Campaign_M3Open
	MovieNameRepeat		= Angmar_Campaign_M3Open
	SkirmishStillImage		= CampaignAngmar_Rhudaur_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= SX_BFME2_Ba1Goblin02
	SubObject				= RHUDAUR ; (sic)
	RegionPortrait			= LWPRhudaur

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 5
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=

	CustomCenterPoint		= Yes
	CenterPoint			= X:187 Y:1792

	HeroArmySpot			= X:60 Y:1686
	HeroArmySpot			= X:166 Y:1696
	HeroArmySpot			= X:141 Y:1809
	HeroArmySpot			= X:236 Y:1729

	GarrisonArmySpot		= X:215 Y:1835

	;BuildingSpot			= X:123 Y:1745
    
        CPLimit				        = 1500
        AllyCPLimit				= 1000
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 0
	End
End

;////////////////////////////
;// Amon Sul (4)
;////////////////////////////
Region Amon_Sul
	DisplayName				= LW:DisplayNameAmonSul
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP ANG Amon Sul"
	MovieNameFirstTime		= Angmar_Campaign_M4Open
	MovieNameRepeat		= Angmar_Campaign_M4Open
	SkirmishStillImage		= CampaignAngmar_AmonSul_LoadScreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= SX_BFME2_Ba1Goblin01
	SubObject				= WEATHERTOP
	RegionPortrait			= LWPAmonSul

	;ResourceBonus			= 0
	;LegendaryBonus			= 1
	;AttackBonus			= 0
	;DefenseBonus			= 5
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=

	CustomCenterPoint			= Yes
	CenterPoint				= X:-282 Y:1408

    HeroArmySpot			= X:-314 Y:1318
	HeroArmySpot			= X:-165 Y:1334
	HeroArmySpot			= X:-205 Y:1505
	HeroArmySpot			= X:-395 Y:1477

	GarrisonArmySpot		= X:-314 Y:1424

	;BuildingSpot			= X:-369 Y:1373
	;BuildingSpot			= X:-151 Y:1425
   
    CPLimit					= 1500
    AllyCPLimit				= 1000
        
	FortressPortrait			= BPCAmonSul
	FortressDisplayName			= LW:DisplayNameAmonSulCastle
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 0
	End
End

;////////////////////////////
;// Dark Eye (5)
;////////////////////////////
Region North_Downs
	DisplayName				= LW:DisplayNameNorthDowns
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP ANG Dark Eye"
	MovieNameFirstTime		= Angmar_Campaign_M5Open
	MovieNameRepeat		= Angmar_Campaign_M5Open
	SkirmishStillImage		= CampaignAngmar_Eye_LoadScreen
	SkirmishMusicTrack		= R_BbEvil105
	SubObject				= NORTH_DOWNS
	RegionPortrait			= LWPNorthDowns
	
	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus			= 5
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS
	
	ConnectsTo			=

	CustomCenterPoint		= Yes
	CenterPoint			= X:-497 Y:1619

	HeroArmySpot			= X:-600 Y:1629
	HeroArmySpot			= X:-568 Y:1694
	HeroArmySpot			= X:-403 Y:1648
	HeroArmySpot			= X:-391 Y:1586

	GarrisonArmySpot		= X:-479 Y:1564

	;BuildingSpot			= X:-497 Y:1619

	CPLimit				= 1500
	AllyCPLimit			= 1000

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 0
	End

	RestrictBuildings
		Buildings		= Barracks
		NumberAllowed		= 0
	End
End

;////////////////////////////
;// Barrow Downs (6)
;////////////////////////////
Region Barrow_Downs
	DisplayName				= LW:DisplayNameBarrowDowns
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP ANG Barrow Downs"
	MovieNameFirstTime		= Angmar_Campaign_M6Open
	MovieNameRepeat		= Angmar_Campaign_M6Open
	SkirmishStillImage		= CampaignAngmar_Barrows_LoadScreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= SX-EvilExplore1
	SubObject				= BARROW_DOWN
	RegionPortrait			= LWPBarrowDOwns

	;ResourceBonus			= 0
	;LegendaryBonus			= 1
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=

	CustomCenterPoint		= Yes
	CenterPoint				= X:-667 Y:1242

    HeroArmySpot			= X:-511 Y:1283
	HeroArmySpot			= X:-530 Y:1185
	HeroArmySpot			= X:-792 Y:1152
	HeroArmySpot			= X:-848 Y:1260

	GarrisonArmySpot		= X:-608 Y:1344

	;BuildingSpot			= X:-667 Y:1242
    
    CPLimit				= 1500
    AllyCPLimit				= 1000
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 0
	End
End

;////////////////////////////
;// Carn Dum (7)
;////////////////////////////
Region CarnDum
	DisplayName				= LW:DisplayNameCarnDum
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP ANG Carn Dum"
	MovieNameFirstTime		= Angmar_Campaign_M7Open
	MovieNameRepeat		= Angmar_Campaign_M7Open
	SkirmishStillImage		= CampaignAngmar_CarnDum_LoadScreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= R_BbEvil108
	SubObject				= Carn_Dum
	RegionPortrait			= LWPCarnDum

	;ResourceBonus			= 0
	;LegendaryBonus			= 10
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=

	CustomCenterPoint		= Yes
	CenterPoint				= X:-155 Y:2295

    HeroArmySpot				= X:-260 Y:2260
    HeroArmySpot				= X:-190 Y:2225
    HeroArmySpot				= X:-125 Y:2210
    HeroArmySpot				= X:-75 Y:2310
    GarrisonArmySpot				= X:-50 Y:2220
    ;BuildingSpot				= X:-290 Y:2330

     CPLimit					= 1500
    AllyCPLimit				= 1000
        
	CreateAutoFort				= No		// This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCCarnDum
	FortressDisplayName			= LW:DisplayNameCarnDumCastle
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 0
	End
End

;////////////////////////////
;// Barrow Wights (8)
;////////////////////////////
Region Barrow_Wights
	DisplayName				= LW:DisplayNameBarrowDowns
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP ANG Barrow Wights"
	MovieNameFirstTime		= Angmar_Campaign_M8Open
	MovieNameRepeat		= Angmar_Campaign_M8Open
	SkirmishStillImage		= CampaignAngmar_Wights_LoadScreen
	SkirmishMusicTrack		= SX_BFME2_Ba1Goblin02
	SubObject				= OLD_FOREST
	RegionPortrait			= LWPOldForest
	
	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus			= 5
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS
	
	ConnectsTo			=

	CustomCenterPoint		= Yes
	CenterPoint			= X:-573 Y:1502

	HeroArmySpot			= X:-628 Y:1564
	HeroArmySpot			= X:-525 Y:1523
	HeroArmySpot			= X:-507 Y:1463
	HeroArmySpot			= X:-557 Y:1445

	GarrisonArmySpot		= X:-620 Y:1484

	;BuildingSpot			= X:-573 Y:1502

	CPLimit				= 1500
	AllyCPLimit			= 1000

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 0
	End

	RestrictBuildings
		Buildings		= Barracks
		NumberAllowed		= 0
	End
End

;////////////////////////////
;// Fornost (9)
;////////////////////////////
Region Fornost
	DisplayName				= LW:DisplayNameFornost
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP ANG Fornost"
	MovieNameFirstTime		= Angmar_Campaign_M9Open
	MovieNameRepeat		= Angmar_Campaign_M9Open
	SkirmishStillImage		= CampaignAngmar_Fornost_LoadScreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= SX_BFME2_Ba1Goblin02
	SubObject				= FORNOST
	RegionPortrait			= LWPFornost

	;ResourceBonus			= 0
	;LegendaryBonus			= 1
	;AttackBonus			= 0
	;DefenseBonus			= 5
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=

	CustomCenterPoint			= Yes
	CenterPoint			= X:-435 Y:1902

	HeroArmySpot			= X:-509 Y:1882
	HeroArmySpot			= X:-335 Y:1848
	HeroArmySpot			= X:-490 Y:1779
	HeroArmySpot			= X:-282 Y:1758

	GarrisonArmySpot		= X:-417 Y:1858

	;BuildingSpot			= X:-376 Y:1778
   
        CPLimit				        = 1500
        AllyCPLimit				= 1000
        
	CreateAutoFort				= No		// This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCFornost
	FortressDisplayName			= LW:DisplayNameFornostCastle		; OBJECT:DolGoldurCastle
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 0
	End
End

;////////////////////////////
;// Epilogue (10)
;////////////////////////////
Region Forodwaith
	DisplayName			= LW:DisplayNameForodwaith
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName				= "MAP ANG Bonus"
	MovieNameFirstTime		= Angmar_Campaign_BonusOpen
	MovieNameRepeat		= Angmar_Campaign_BonusOpen
	SkirmishStillImage		= CampaignAngmar_Angmar_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= SX_BFME2_Ex1Good01
	SubObject			= FORODWAITH
	RegionPortrait			= LWPForodwaith

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 5
	;DefenseBonus			= 5
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=


	CustomCenterPoint			= Yes
	CenterPoint			= X:-516 Y:2364

	HeroArmySpot			= X:-606 Y:2350
	HeroArmySpot			= X:-140 Y:2485
	HeroArmySpot			= X:197 Y:2474
	HeroArmySpot			= X:-765 Y:2400

	GarrisonArmySpot		= X:-416 Y:2400

	;BuildingSpot			= X:-512 Y:2321
	;BuildingSpot			= X:107 Y:2443
   
        CPLimit				        = 1500
        AllyCPLimit				= 1000
        
	CreateAutoFort				= No
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 0
	End
End

;////////////////////////////
;// Mount Doom
;////////////////////////////
Region Mount_Doom
	DisplayName				= LW:DisplayNameMtDoom
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP Edain WOR Mount Doom"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Mount_Doom_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= MOUNT_DOOM
	RegionPortrait			= LWPMount_Doom

	;ResourceBonus			= 0
	;LegendaryBonus			= 1
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo			=

	CustomCenterPoint		= Yes
	CenterPoint			= X:2100 Y:130

	HeroArmySpot			= X:2040 Y:-65
	HeroArmySpot			= X:1925 Y:135
	HeroArmySpot			= X:2040 Y:300
	HeroArmySpot			= X:2300 Y:190

	GarrisonArmySpot		= X:2200 Y:80

	;BuildingSpot			= X:1935 Y:210
	;BuildingSpot			= X:2235 Y:280
	;BuildingSpot			= X:2150 Y:-55

        CPLimit				        = 1500
        AllyCPLimit				= 1000
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 0
	End
End
