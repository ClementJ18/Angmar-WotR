;//////////////////////////////////////////////////
;// Test Campaign
;//////////////////////////////////////////////////
LivingWorldCampaign WOTRScenarioAngmar

    IsEvilCampaign = Yes    

    ;////////////// RTS Settings /////////////
    #include "..\Common\LivingWorldDefaultRTSSettings.inc"
    ;#include "..\Common\LivingWorldDefaultDefaultArmies.inc"
    
    Scenario
        DisplayName         = LWScenario:CampaignAngmar
        DisplayDescription  = LWScenario:CampaignAngmarDescription
        DisplayGameType     = LWScenario:WOTRGameTypeCampaign
        DisplayObjectives   = LWScenario:WOTRObjectivesCampaign
        DisplayFiction      = LWScenario:WOTRScenarioFiction004
        DisplayVictoriousText   = LWScenario:WOTREliminationWinCampaign
        DisplayDefeatedText = LWScenario:WOTREliminationLoseCampaign

        RegionCampaign = RingkriegAngmar

        MinPlayers = 2
        MaxPlayers = 2


        ;DisableRegions = High_Pass Ettenmoors Tower_Hills Grey_Havens Celduin Erebor Mirkwood ; Rivendell High_Pass Ettenmoors Tower_Hills Grey_Havens Celduin Erebor Dol_Guldur Mirkwood
        DisabledFactions =  FactionArnor FactionElves FactionRohan FactionImladris FactionMordor FactionImladris FactionDwarves FactionIsengard FactionWild FactionEvilmen
        DefaultStartSpots = CarnDum Fornost

        //HistoricalScenario marks this scenario as following several rules:
        // *Each player must play a unique faction (the list of selectable factions is dicated by the
        //  "DisabledFactions" flag above)
        // *Each faction has a predetermined starting location and team (outlined in the starting
        //  restrictions below)
        // Please read the information below on Starting Restrictions for more information.
        HistoricalScenario = Yes
    
            PlayerDefeatCondition
                    Teams = 1 2
                    LoseIfCapitalLost = No
                    NumControlledRegionsLessOrEqualTo = 0
            End

            TeamDefeatCondition
                    Teams = 1 2
                    NumControlledRegionsLessOrEqualTo = 0
            End
    
        //A HistoricalScenario MUST include a Starting Restriction for each faction allowed in the
        //scenario.  This restriction dictates the starting region and team of each faction.  This is
        //important because users will NOT be able to choose a team or starting location if the
        //"HistoricalScenario" flag is set.
        //
        //Also note, in this case Starting Restrictions are being used in a different context than what
        //they are used for when the HistoricalScenario flag is not set.  Without the HistoricalScenario
        //flag, starting restrictions restrict selection to starting position only, and the starting
        //position dictates the faction and/or team

        StartingRestriction
            Factions = FactionAngmar
            Regions = CarnDum
            Teams = 1
        End
        
        StartingRestriction
            Factions = FactionMen
            Regions = Fornost
            Teams = 2
        End
        
        //-----------End Historical starting restrictions

            //----------------------------------------------------------
            // OwnershipSets
            //----------------------------------------------------------

            // OwnershipSets are how you decide who owns which region at the start of the game (and what armies are owned also)

            OwnershipSet
            Regions = CarnDum
            StartRegion = CarnDum Mordor
            ;SpawnBuildings
            ;   Region = Rivendell
            ;   Buildings = LW_ARMORY
            ;End
        End
        
        OwnershipSet
            Regions = Angmar MountGundabad Rhudaur Amon_Sul North_Downs Barrow_Downs Barrow_Wights Fornost Forodwaith
            StartRegion = Fornost
        End
        
    End
    
    ;//////////////////////////////////////////////////
    Act One ;Angmar
    ;//////////////////////////////////////////////////
        
        ;/////// Intro ///////
        ;WorldText                       ; Verschwindet erst nach Echtzeiten
        ;    DelayFromActStart = 0.0
        ;    StringTag = LW:Angmar_Start ;Ohne Verweis wird nichts angezeigt
        ;End

        ;WorldText
        ;    DelayFromActStart = 5.2
        ;    StringTag = LW:Angmar_First_Mission
        ;End

        ;AUDIO EVENTS

        ;CAMERA

        ;////// ARMIES ///////
        ;PLAYER ARMIES BREAKDOWN
        ; WitchKing
        ; - WK
        ; - Durmarth
        ; - Rogash
        ; - Drauglin

        ; Morgomir
        ; - Mornamarth
        ; - Zaphragor
        ; - Helegwen
        ; - Hwaldar
        ; - Gulzar

        ;ANGMAR
        SpawnArmy
            ScriptingName = WitchKing_Army
            SpawnForTemplates = PlayerAngmar
            HeroTemplateName = AngmarWitchking_mod
            PlayerArmy = WitchKingKampaArmy
            Icon = HeroAngmarWitchkingIcon
            Banner = BannerAngmar
            InitialRegion = CarnDum
        End

        SetPlayerControlOfArmy
            ArmyScriptingName = WitchKing_Army
            IsControllableByOwner = No
        End

        SpawnArmy
            ScriptingName = Morchant_Army
            SpawnForTemplates = PlayerMen
            PlayerArmy = MorchantKampaArmy
            Icon = AngmarArmyIcon
            Banner = BannerAngmar
            InitialRegion = Angmar
        End

        ;GUNDABAD
        SpawnArmy
            ScriptingName = Goblins_Army
            SpawnForTemplates = PlayerMen
            PlayerArmy = CorruptedWild_StartingArmy
            Icon = WildArmyIcon
            Banner = BannerWild
            InitialRegion = MountGundabad
        End

        ;RHUDAUR
        SpawnArmy
            ScriptingName = Argeleb_Army
            SpawnForTemplates = PlayerMen
            PlayerArmy = ArgelebKampaArmy
            Icon = ArnorArmyIcon
            Banner = BannerArnor
            InitialRegion = Rhudaur
        End

        ;Amon Sul
        SpawnArmy
            ScriptingName = Arveleg_Army
            SpawnForTemplates = PlayerMen
            PlayerArmy = ArvelegKampaArmy
            Icon = ArnorArmyIcon
            Banner = BannerArnor
            InitialRegion = Amon_Sul
        End

        ;Dark Eye
        SpawnArmy
            ScriptingName = DarkEye_Army
            SpawnForTemplates = PlayerMen
            PlayerArmy = Arnor_StandardArmy
            Icon = ArnorArmyIcon
            Banner = BannerArnor
            InitialRegion = North_Downs
        End

        ;Barrow Downs
        SpawnArmy
            ScriptingName = CardolanPrince_Army
            SpawnForTemplates = PlayerMen
            PlayerArmy = Arnor_StandardArmy
            Icon = ArnorArmyIcon
            Banner = BannerArnor
            Position = X:-485 Y:888
        End

        ;Carn Dum
        SpawnArmy
            ScriptingName = ImladrisAttack_Army
            SpawnForTemplates = PlayerMen
            PlayerArmy = Imladris_StartingArmy
            Icon = ImladrisArmyIcon
            Banner = BannerImladris
            Position = X:215 Y:1467
        End

        SpawnArmy
            ScriptingName = ArnorAttack_Army
            SpawnForTemplates = PlayerMen
            PlayerArmy = Arnor_StandardArmy
            Icon = ArnorArmyIcon
            Banner = BannerArnor
            Position = X:-671 Y:1822
        End

        ;Barrow Wights
        SpawnArmy
            ScriptingName = Carthean_Army
            SpawnForTemplates = PlayerMen
            PlayerArmy = ArnorCartheanArmy
            Icon = ArnorArmyIcon
            Banner = BannerArnor
            Position = X:-662 Y:1715
        End 

        ;Fornost
        SpawnArmy
            ScriptingName = Arvedui_Army
            SpawnForTemplates = PlayerMen
            PlayerArmy = ArnorArveduiArmy
            Icon = HeroArveduiIcon
            Banner = BannerArnor
            InitialRegion = Fornost
        End        

        ; ACT 1
        MoveArmy
            ArmyScriptingName  = WitchKing_Army
            TargetRegionName = Angmar
        End

        ;ADD ROGASH TO WitchKing_Army HERE

        
    End
    
    ;//////////////////////////////////////////////////
    Act Two ;MountGundabad
    ;////////////////////////////////////////////////// 

        MoveArmy
            ArmyScriptingName  = WitchKing_Army
            TargetRegionName = MountGundabad
            ;DefaultArmyMoveSpeed = 20.0
        End
        
    End
    
    ;//////////////////////////////////////////////////
    Act Three ;Rhudaur & Amon Sul
    ;//////////////////////////////////////////////////
        SpawnArmy
            ScriptingName = Morgomir_Army
            SpawnForTemplates = PlayerAngmar
            HeroTemplateName = AngmarMorgramir_mod
            PlayerArmy = MorgomirArmy
            Icon = AngmarArmyIcon
            Banner = BannerAngmar
            InitialRegion = CarnDum
        End

        SetPlayerControlOfArmy
            ArmyScriptingName = Morgomir_Army
            IsControllableByOwner = No
        End

        MoveArmy
            ArmyScriptingName  = Morgomir_Army
            TargetRegionName = Rhudaur
            ;DefaultArmyMoveSpeed = 20.0
        End

        ;ADD HWALDAR TO Morgomir_Army HERE
        ;ADD GULZAR TO Morgomir_Army HERE    
    
        ; Doesn't work ;( - Necro
        ; MergePlayerArmy
        ;     SourceArmy = Zaphragor_Army
        ;     DestArmy = Hwaldar_Army
        ;     SplitArmyTemplate = HelegwenSplitArmy
        ;     SplitArmy = Yes
        ; End

        ; MergePlayerArmy
        ;     SourceArmy = Zaphragor_Army
        ;     DestArmy = WitchKing_Army
        ;     SplitArmyTemplate = ZaphragorSplitArmy
        ;     SplitArmy = Yes
        ; End
        ; DespawnArmy = Zaphragor_Army

        MoveArmy
            ArmyScriptingName  = WitchKing_Army
            TargetRegionName = Amon_Sul
            ;DefaultArmyMoveSpeed = 20.0
        End

    End
    
    ;//////////////////////////////////////////////////
    Act Four ;Dark Eye & Barrow_Downs
    ;//////////////////////////////////////////////////
        MoveArmy
            ArmyScriptingName  = WitchKing_Army
            TargetRegionName = North_Downs
            ;DefaultArmyMoveSpeed = 20.0
        End

        MoveArmy
            ArmyScriptingName  = Morgomir_Army
            TargetRegionName = Barrow_Downs
            ;DefaultArmyMoveSpeed = 20.0
        End

        MoveArmy
            ArmyScriptingName  = CardolanPrince_Army
            TargetRegionName = Barrow_Downs
            ;DefaultArmyMoveSpeed = 20.0
        End
        
    End
    
    ;//////////////////////////////////////////////////
    Act Five ;CarnDum
    ;//////////////////////////////////////////////////

        ;attack
        MoveArmy
            ArmyScriptingName  = ImladrisAttack_Army
            TargetRegionName = CarnDum
            ;DefaultArmyMoveSpeed = 20.0
        End

        MoveArmy
            ArmyScriptingName  = ArnorAttack_Army
            TargetRegionName = CarnDum
            ;DefaultArmyMoveSpeed = 20.0
        End

        ;defense
        MoveArmy
            ArmyScriptingName  = WitchKing_Army
            TargetRegionName = CarnDum
            ;DefaultArmyMoveSpeed = 20.0
        End

        MoveArmy
            ArmyScriptingName  = Morgomir_Army
            TargetRegionName = CarnDum
            ;DefaultArmyMoveSpeed = 20.0
        End
        
    End
    
    ;//////////////////////////////////////////////////
    Act Six ;Barrow_Wights
    ;//////////////////////////////////////////////////
        MoveArmy
            ArmyScriptingName  = Morgomir_Army
            TargetRegionName = Barrow_Wights
            ;DefaultArmyMoveSpeed = 20.0
        End

        MoveArmy
            ArmyScriptingName  = Carthean_Army
            TargetRegionName = Barrow_Wights
            ;DefaultArmyMoveSpeed = 20.0
        End

        ;ADD KARSH TO Morgomir_Army HERE
    End

    ;//////////////////////////////////////////////////
    Act Seven ;Fornost
    ;//////////////////////////////////////////////////
        MoveArmy
            ArmyScriptingName  = WitchKing_Army
            TargetRegionName = Fornost
            ;DefaultArmyMoveSpeed = 20.0
        End

        MoveArmy
            ArmyScriptingName  = Morgomir_Army
            TargetRegionName = Fornost
            ;DefaultArmyMoveSpeed = 20.0
        End
    End

    ;//////////////////////////////////////////////////
    Act Eight ;Set up Epilogue
    ;//////////////////////////////////////////////////
        ; We hate you now, go away
        MoveArmy
            ArmyScriptingName  = WitchKing_Army
            TargetRegionName = Forodwaith
        End

        MoveArmy
            ArmyScriptingName  = Morgomir_Army
            TargetRegionName = Forodwaith
        End

        ; You're the good guys now
        SpawnArmy
            ScriptingName = EarnurAttack_Army
            SpawnForTemplates = PlayerAngmar
            PlayerArmy = ArnorEarnurArmy
            Icon = HeroEarnurIcon
            Banner = BannerMen
            Position = X:1302 Y:-85
        End

        SetPlayerControlOfArmy
            ArmyScriptingName = EarnurAttack_Army
            IsControllableByOwner = No
        End

        SpawnArmy
            ScriptingName = ElrondAttack_Army
            SpawnForTemplates = PlayerAngmar
            PlayerArmy = ElrondPlayerArmy
            Icon = HeroElrondIcon
            Banner = BannerImladris
            Position = X:215 Y:1467
        End

        SetPlayerControlOfArmy
            ArmyScriptingName = ElrondAttack_Army
            IsControllableByOwner = No
        End

    End

    ;//////////////////////////////////////////////////
    Act Nine ; Epilogue
    ;//////////////////////////////////////////////////

        MoveArmy
            ArmyScriptingName  = EarnurAttack_Army
            TargetRegionName = Forodwaith
            ;DefaultArmyMoveSpeed = 20.0
        End

        MoveArmy
            ArmyScriptingName  = ElrondAttack_Army
            TargetRegionName = Forodwaith
            ;DefaultArmyMoveSpeed = 20.0
        End

    End

End 

;MoveArmy   ; Option to remove Armies
;           Name = LegolasAragornGimli
;           MoveTo = X:-5000 Y:-5000  ; off the map (the player armies have already merged with other armies)
;           MoveSpeed = 2000.0
;       End

;RegionReinforcements ; Funktioniert das noch?
;           RegionName = Minas_Tirith
;           AddReinforcementArmy = Eomer
;           AddReinforcementArmy = Oathbreakers:AutoSummon
;           CloseDistanceTime = 1500
;           MediumDistanceTime = 1500
;           FarDistanceTime = 2100
;           PathFindRule = AllRegions
;       End

; ForceBattle
;             Region = Lothlorien
; ;           Position = X:726 Y:1060 ; Caras Galadad
;             UseArmy = Fellowship
;             ArmyAttackDirection = X:0 Y:1           
;         End
        
; EnableRegion
;     Region = Eaves_of_Fangorn
; End

;//////////////////////////////////////////////////////
;// Custom Regions for this Scenario
;//////////////////////////////////////////////////////

LivingWorldRegionCampaign RingkriegAngmar
    
    RegionConqueredSound = Gui_RegionConquered
    
    // Determine what region effects we use with this campaign
    RegionEffectsManagerName = WotRRegionEffects

    ;//////////////////////////////////////
    ;// Region Bonus String Tags
    ;//////////////////////////////////////
    RegionBonusArmy            = LW:RegionBonusArmy_Good
    RegionBonusResource        = LW:RegionBonusResource
    RegionBonusLegendary       = LW:RegionLegendaryBonus
    
    
    ;//////////////////////////////////////
    ;// Army Size Command Point Caps
    ;//////////////////////////////////////
    HeroOnlyArmyCommandPoints    = 0                ; command-point cap for use of "hero by him/herself" army icon
    SmallArmyCommandPoints       = 0 ;500                ; command-point cap for use of small army icon
    MediumArmyCommandPoints      = 0 ;1000                ; command-point cap for use of medium army icon
    
    ArmyRetreatRounds        = 8                ; Number of rounds of auto-resolve to perform on a retreating army
    
    ;//////////////////////////////////////
    ;// Default army region placement for summoned army reinforcements
    ;// these values are OFFSETS from the region center point
    ;// positions defined in region blocks are actual world coordinates
    ;//////////////////////////////////////
    ArmyPlacementPos        = X:-85 Y:48            ; 10 o'clock offset
    ArmyPlacementPos        = X:85 Y:48            ; 2 o'clock offset
    
    


    //-------------------------------------------------------------------------------------------------
    // Regions 
    //-------------------------------------------------------------------------------------------------

    #include "..\Common\livingworldangmarregions.inc"
    
End

LivingWorldPlayerArmy
    Name = WitchKingKampaArmy
    DisplayNameTag = LWA:AngmarHeroArmy       
    ArmyEntry
        ThingTemplate = AngmarWitchking_mod
        Quantity = 1
    End
    ArmyEntry
        ThingTemplate = AngmarDurmarth
        Quantity = 1
    End

    ArmyEntry
        ThingTemplate = AngmarRogash_New
        Quantity = 1
    End

    ArmyEntry
        ThingTemplate = AngmarDrauglin
        Quantity = 1
    End
End

LivingWorldPlayerArmy
    Name = MorgomirArmy
    DisplayNameTag = LWA:AngmarHeroArmy       
    ArmyEntry
        ThingTemplate = AngmarMorgramir_mod
        Quantity = 1
    End
    
    ArmyEntry
        ThingTemplate = AngmarZaphragor
        Quantity = 1
    End
    
    ArmyEntry
        ThingTemplate = AngmarHelegwen
        Quantity = 1
    End

    ArmyEntry
        ThingTemplate = AngmarHwaldar
        Quantity = 1
    End

    ArmyEntry
        ThingTemplate = AngmarGulzar_Alone
        Quantity = 1
    End
End

LivingWorldPlayerArmy
    Name = MorchantKampaArmy
    DisplayNameTag = LWA:AngmarHeroArmy       
    ArmyEntry
        ThingTemplate = AngmarMorchant
        Quantity = 1
    End
End

LivingWorldPlayerArmy
    Name = ArgelebKampaArmy
    DisplayNameTag = LWA:ArnorHeroArmy       
    ArmyEntry
        ThingTemplate = ArnorArgeleb
        Quantity = 1
    End
End

LivingWorldPlayerArmy
    Name = ArvelegKampaArmy
    DisplayNameTag = LWA:ArnorHeroArmy       
    ArmyEntry
        ThingTemplate = ArnorArveleg
        Quantity = 1
    End
End

LivingWorldPlayerArmy
    Name = Arnor_StandardArmy
    DisplayNameTag = LWA:ArnorGarrison
    ArmyEntry
        ThingTemplate = ArnorFighterHorde
        Quantity = 1
    End 
    ArmyEntry
        ThingTemplate = ArnorArcherHorde
        Quantity = 1
    End 
    ArmyEntry
        ThingTemplate = ArnorTowerShieldGuardHorde
        Quantity = 1
    End 
    ArmyEntry
        ThingTemplate = ArnorKnightHorde
        Quantity = 1
    End
End
