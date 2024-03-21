class etr_ranks_insignias {
    class default_faction {
        name = "Default";
        values[] = {
            "\a3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa",
            "\a3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa",
            "\a3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa",
            "\a3\Ui_f\data\GUI\Cfg\Ranks\lieutenant_gs.paa",
            "\a3\Ui_f\data\GUI\Cfg\Ranks\captain_gs.paa",
            "\a3\Ui_f\data\GUI\Cfg\Ranks\major_gs.paa",
            "\a3\Ui_f\data\GUI\Cfg\Ranks\colonel_gs.paa"
        };

        class default_rank {
            name = "Default";
            icon = "";
            rank = -1;
        };
    };

    class uk_army {
        name = "UK Army";
        values[] = {    // These values are used for the automatic conversion of default Arma ranks.
            "\z\ace\addons\nametags\UI\icons_uk\private_gs.paa",
            "\z\ace\addons\nametags\UI\icons_uk\corporal_gs.paa",
            "\z\ace\addons\nametags\UI\icons_uk\sergeant_gs.paa",
            "\z\ace\addons\nametags\UI\icons_uk\lieutenant_gs.paa",
            "\z\ace\addons\nametags\UI\icons_uk\captain_gs.paa",
            "\z\ace\addons\nametags\UI\icons_uk\major_gs.paa",
            "\z\ace\addons\nametags\UI\icons_uk\colonel_gs.paa"
        };

        class default_rank {
            name = "Default";
            icon = "";
            rank = -1;
        };
        class private {
            name = "Private";
            icon = "\z\ace\addons\nametags\UI\icons_uk\private_gs.paa";
            rank = 0; // First in vanilla ranks.
        };
        class lance_corporal {
            name = "Lance Corporal";
            icon = QPATHTOF(data\uk_army\lance_corporal.paa);
            rank = -1; // No standard Arma rank.
        };
        class corporal {
            name = "Corporal";
            icon = "\z\ace\addons\nametags\UI\icons_uk\corporal_gs.paa";
            rank = 1; // Second in vanilla ranks.
        };
        class sergeant {
            name = "Sergeant";
            icon = "\z\ace\addons\nametags\UI\icons_uk\sergeant_gs.paa";
            rank = 2; // Third in vanilla ranks.
        };
        class staff_sergeant {
            name = "Staff Sergeant";
            icon = QPATHTOF(data\uk_army\staff_sergeant.paa);
            rank = -1; // No standard Arma rank.
        };
        class second_lieutenant {
            name = "Second Lieutenant";
            icon = QPATHTOF(data\uk_army\second_lieutenant.paa);
            rank = -1; // No standard Arma rank.
        };
        class lieutenant {
            name = "Lieutenant";
            icon = "\z\ace\addons\nametags\UI\icons_uk\lieutenant_gs.paa";
            rank = 3; // Forth in vanilla ranks.
        };
        class captain {
            name = "Captain";
            icon = "\z\ace\addons\nametags\UI\icons_uk\captain_gs.paa";
            rank = 4; // Fifth in vanilla ranks.
        };
        class major {
            name = "Major";
            icon = "\z\ace\addons\nametags\UI\icons_uk\major_gs.paa";
            rank = 5; // Sixth in vanilla ranks.
        };
        class colonel {
            name = "Colonel";
            icon = "\z\ace\addons\nametags\UI\icons_uk\colonel_gs.paa";
            rank = 6; // Seventh in vanilla ranks.
        };
    };

    class us_army {
        name = "US Army";
        values[] = {
            QPATHTOF(data\us_army\E-2 Private.paa),
            QPATHTOF(data\us_army\E-4 Corporal.paa),
            QPATHTOF(data\us_army\E-5 Sergeant.paa),
            QPATHTOF(data\us_army\O-2 First Lieutenant.paa),
            QPATHTOF(data\us_army\O-3 Captain.paa),
            QPATHTOF(data\us_army\O-4 Major.paa),
            QPATHTOF(data\us_army\O-6 Colonel.paa)
        };

        class default_rank {
            name = "Default";
            icon = "";
            rank = -1;
        };
        class e1_private {
            name = "E-1 Private";
            icon = QPATHTOF(data\blank.paa);
            rank = -1;
        };
        class e2_private {
            name = "E-2 Private";
            icon = QPATHTOF(data\us_army\E-2 Private.paa);
            rank = 0;
        };
        class e3_private {
            name = "E-3 Private First Class";
            icon = QPATHTOF(data\us_army\E-3 Private First Class.paa);
            rank = -1;
        };
        class e4_specialist {
            name = "E-4 Specialist";
            icon = QPATHTOF(data\us_army\E-4 Specialist.paa);
            rank = -1;
        };
        class e4_corporal {
            name = "E-4 Corporal";
            icon = QPATHTOF(data\us_army\E-4 Corporal.paa);
            rank = 1;
        };
        class e5_sergeant {
            name = "E-5 Sergeant";
            icon = QPATHTOF(data\us_army\E-5 Sergeant.paa);
            rank = 2;
        };
        class e6_staff_sergeant {
            name = "E-6 Staff Sergeant";
            icon = QPATHTOF(data\us_army\E-6 Staff Sergeant.paa);
            rank = -1;
        };
        class e7_sergeant_first_class {
            name = "E-7 Sergeant First Class";
            icon = QPATHTOF(data\us_army\E-7 Sergeant First Class.paa);
            rank = -1;
        };
        class e8_first_sergeant {
            name = "E-8 First Sergeant";
            icon = QPATHTOF(data\us_army\E-8 First Sergeant.paa);
            rank = -1;
        };
        class e8_master_sergeant {
            name = "E-8 Master Sergeant";
            icon = QPATHTOF(data\us_army\E-8 Master Sergeant.paa);
            rank = -1;
        };
        class e9_command_sergeant_major {
            name = "E-9 Command Sergeant Major";
            icon = QPATHTOF(data\us_army\E-9 Command Sergeant Major.paa);
            rank = -1;
        };
        class e9_sergeant_major_army {
            name = "E-9 Sergeant Major of the Army";
            icon = QPATHTOF(data\us_army\E-9 Sergeant Major of the Army.paa);
            rank = -1;
        };
        class e9_sergeant_major {
            name = "E-9 Sergeant Major";
            icon = QPATHTOF(data\us_army\E-9 Sergeant Major.paa);
            rank = -1;
        };
        
        class o1_second_lieutenant {
            name = "O-1 Second Lieutenant";
            icon = QPATHTOF(data\us_army\O-1 Second Lieutenant.paa);
            rank = -1;
        };
        class o2_first_lieutenant {
            name = "O-2 First Lieutenant";
            icon = QPATHTOF(data\us_army\O-2 First Lieutenant.paa);
            rank = 3;
        };
        class o3_captain {
            name = "O-3 Captain";
            icon = QPATHTOF(data\us_army\O-3 Captain.paa);
            rank = 4;
        };
        class o4_major {
            name = "O-4 Major";
            icon = QPATHTOF(data\us_army\O-4 Major.paa);
            rank = 5;
        };
        class o5_lieutenant_colonel {
            name = "O-5 Lieutenant Colonel";
            icon = QPATHTOF(data\us_army\O-5 Lieutenant Colonel.paa);
            rank = -1;
        };
        class o6_colonel {
            name = "O-6 Colonel";
            icon = QPATHTOF(data\us_army\O-6 Colonel.paa);
            rank = 6;
        };
        class o7_brigadier_general {
            name = "O-7 Brigadier General";
            icon = QPATHTOF(data\us_army\O-7 Brigadier General.paa);
            rank = -1;
        };
        class w1_warrant_officer_1 {
            name = "W-1 Warrant Officer 1";
            icon = QPATHTOF(data\us_army\W-1 Warrant Officer 1.paa);
            rank = -1;
        };
        class w2_warrant_officer_2 {
            name = "W-2 Warrant Officer 2";
            icon = QPATHTOF(data\us_army\W-2 Chief Warrant Officer 2.paa);
            rank = -1;
        };
        class w3_warrant_officer_3 {
            name = "W-3 Warrant Officer 3";
            icon = QPATHTOF(data\us_army\W-3 Chief Warrant Officer 3.paa);
            rank = -1;
        };
        class w4_warrant_officer_4 {
            name = "W-4 Warrant Officer 4";
            icon = QPATHTOF(data\us_army\W-4 Chief Warrant Officer 4.paa);
            rank = -1;
        };
        class w5_warrant_officer_5 {
            name = "W-5 Warrant Officer 5";
            icon = QPATHTOF(data\us_army\W-5 Chief Warrant Officer 5.paa);
            rank = -1;
        };
    };

    class usmc {
        name = "USMC";
        values[] = {
            QPATHTOF(data\usmc\E-2 Private First Class.paa),
            QPATHTOF(data\usmc\E-4 Corporal.paa),
            QPATHTOF(data\usmc\E-5 Sergeant.paa),
            QPATHTOF(data\usmc\O-2 First Lieutenant.paa),
            QPATHTOF(data\usmc\O-3 Captain.paa),
            QPATHTOF(data\usmc\O-4 Major.paa),
            QPATHTOF(data\usmc\O-6 Colonel.paa)
        };

        class default_rank {
            name = "Default";
            icon = "";
            rank = -1;
        };
        class e1_private {
            name = "E-1 Private";
            icon = QPATHTOF(data\blank.paa);
            rank = -1;
        };
        class e2_private {
            name = "E-2 Private First Class";
            icon = QPATHTOF(data\usmc\E-2 Private First Class.paa);
            rank = 0;
        };
        class e3_lance_corporal {
            name = "E-3 Lance Corporal";
            icon = QPATHTOF(data\usmc\E-3 Lance Corporal.paa);
            rank = -1;
        };
        class e4_corporal {
            name = "E-4 Corporal";
            icon = QPATHTOF(data\usmc\E-4 Corporal.paa);
            rank = 1;
        };
        class e5_sergeant {
            name = "E-5 Sergeant";
            icon = QPATHTOF(data\usmc\E-5 Sergeant.paa);
            rank = 2;
        };
        class e6_staff_sergeant {
            name = "E-6 Staff Sergeant";
            icon = QPATHTOF(data\usmc\E-6 Staff Sergeant.paa);
            rank = -1;
        };
        class e7_gunnery_sergeant {
            name = "E-7 Gunnery Sergeant";
            icon = QPATHTOF(data\usmc\E-7 Gunnery Sergeant.paa);
            rank = -1;
        };
        class e8_first_sergeant {
            name = "E-8 First Sergeant";
            icon = QPATHTOF(data\usmc\E-8 First Sergeant.paa);
            rank = -1;
        };
        class e8_master_sergeant {
            name = "E-8 Master Sergeant";
            icon = QPATHTOF(data\usmc\E-8 Master Sergeant.paa);
            rank = -1;
        };
        class e9_master_gunnery_sergeant {
            name = "E-9 Master Gunnery Sergeant";
            icon = QPATHTOF(data\usmc\E-9 Master Gunnery Sergeant.paa);
            rank = -1;
        };
        class e9_sergeant_major_corps {
            name = "E-9 Sergeant Major of the Marine Corps";
            icon = QPATHTOF(data\usmc\E-9 Sergeant Major of the Marine Corps.paa);
            rank = -1;
        };
        class e9_sergeant_major {
            name = "E-9 Sergeant Major";
            icon = QPATHTOF(data\usmc\E-9 Sergeant Major.paa);
            rank = -1;
        };

        class o1_second_lieutenant {
            name = "O-1 Second Lieutenant";
            icon = QPATHTOF(data\usmc\O-1 Second Lieutenant.paa);
            rank = -1;
        };
        class o2_first_lieutenant {
            name = "O-2 First Lieutenant";
            icon = QPATHTOF(data\usmc\O-2 First Lieutenant.paa);
            rank = 3;
        };
        class o3_captain {
            name = "O-3 Captain";
            icon = QPATHTOF(data\usmc\O-3 Captain.paa);
            rank = 4;
        };
        class o4_major {
            name = "O-4 Major";
            icon = QPATHTOF(data\usmc\O-4 Major.paa);
            rank = 5;
        };
        class o5_lieutenant_colonel {
            name = "O-5 Lieutenant Colonel";
            icon = QPATHTOF(data\usmc\O-5 Lieutenant Colonel.paa);
            rank = -1;
        };
        class o6_colonel {
            name = "O-6 Colonel";
            icon = QPATHTOF(data\usmc\O-6 Colonel.paa);
            rank = 6;
        };
        class o7_brigadier_general {
            name = "O-7 Brigadier General";
            icon = QPATHTOF(data\usmc\O-7 Brigadier General.paa);
            rank = -1;
        };
        class w1_warrant_officer_1 {
            name = "W-1 Warrant Officer 1";
            icon = QPATHTOF(data\usmc\W-1 Warrant Officer 1.paa);
            rank = -1;
        };
        class w2_warrant_officer_2 {
            name = "W-2 Warrant Officer 2";
            icon = QPATHTOF(data\usmc\W-2 Chief Warrant Officer 2.paa);
            rank = -1;
        };
        class w3_warrant_officer_3 {
            name = "W-3 Warrant Officer 3";
            icon = QPATHTOF(data\usmc\W-3 Chief Warrant Officer 3.paa);
            rank = -1;
        };
        class w4_warrant_officer_4 {
            name = "W-4 Warrant Officer 4";
            icon = QPATHTOF(data\usmc\W-4 Chief Warrant Officer 4.paa);
            rank = -1;
        };
        class w5_warrant_officer_5 {
            name = "W-5 Warrant Officer 5";
            icon = QPATHTOF(data\usmc\W-5 Chief Warrant Officer 5.paa);
            rank = -1;
        };
    };

    class russia {
        name = "Russia";
        values[] = {
            "\z\ace\addons\nametags\UI\icons_russia\private_gs.paa",
            "\z\ace\addons\nametags\UI\icons_russia\corporal_gs.paa",
            "\z\ace\addons\nametags\UI\icons_russia\sergeant_gs.paa",
            "\z\ace\addons\nametags\UI\icons_russia\lieutenant_gs.paa",
            "\z\ace\addons\nametags\UI\icons_russia\captain_gs.paa",
            "\z\ace\addons\nametags\UI\icons_russia\major_gs.paa",
            "\z\ace\addons\nametags\UI\icons_russia\colonel_gs.paa"
        };

        class default_rank {
            name = "Default";
            icon = "";
            rank = -1;
        };
        class private {
            name = "Private";
            icon = "\z\ace\addons\nametags\UI\icons_russia\private_gs.paa";
            rank = 0;
        };
        class corporal {
            name = "Corporal";
            icon = "\z\ace\addons\nametags\UI\icons_russia\corporal_gs.paa";
            rank = 1;
        };
        class sergeant {
            name = "Sergeant";
            icon = "\z\ace\addons\nametags\UI\icons_russia\sergeant_gs.paa";
            rank = 2;
        };
        class lieutenant {
            name = "Lieutenant";
            icon = "\z\ace\addons\nametags\UI\icons_russia\lieutenant_gs.paa";
            rank = 3;
        };
        class captain {
            name = "Captain";
            icon = "\z\ace\addons\nametags\UI\icons_russia\captain_gs.paa";
            rank = 4;
        };
        class major {
            name = "Major";
            icon = "\z\ace\addons\nametags\UI\icons_russia\major_gs.paa";
            rank = 5;
        };
        class colonel {
            name = "Colonel";
            icon = "\z\ace\addons\nametags\UI\icons_russia\colonel_gs.paa";
            rank = 6;
        };
    };
    class spain {
        name = "Spain";
        values[] = {
            "\z\ace\addons\nametags\UI\icons_spain\private_gs.paa",
            "\z\ace\addons\nametags\UI\icons_spain\corporal_gs.paa",
            "\z\ace\addons\nametags\UI\icons_spain\sergeant_gs.paa",
            "\z\ace\addons\nametags\UI\icons_spain\lieutenant_gs.paa",
            "\z\ace\addons\nametags\UI\icons_spain\captain_gs.paa",
            "\z\ace\addons\nametags\UI\icons_spain\major_gs.paa",
            "\z\ace\addons\nametags\UI\icons_spain\colonel_gs.paa"
        };

        class default_rank {
            name = "Default";
            icon = "";
            rank = -1;
        };
        class private {
            name = "Private";
            icon = "\z\ace\addons\nametags\UI\icons_spain\private_gs.paa";
            rank = 0;
        };
        class corporal {
            name = "Corporal";
            icon = "\z\ace\addons\nametags\UI\icons_spain\corporal_gs.paa";
            rank = 1;
        };
        class sergeant {
            name = "Sergeant";
            icon = "\z\ace\addons\nametags\UI\icons_spain\sergeant_gs.paa";
            rank = 2;
        };
        class lieutenant {
            name = "Lieutenant";
            icon = "\z\ace\addons\nametags\UI\icons_spain\lieutenant_gs.paa";
            rank = 3;
        };
        class captain {
            name = "Captain";
            icon = "\z\ace\addons\nametags\UI\icons_spain\captain_gs.paa";
            rank = 4;
        };
        class major {
            name = "Major";
            icon = "\z\ace\addons\nametags\UI\icons_spain\major_gs.paa";
            rank = 5;
        };
        class colonel {
            name = "Colonel";
            icon = "\z\ace\addons\nametags\UI\icons_spain\colonel_gs.paa";
            rank = 6;
        };
    };
    class france {
        name = "France";
        values[] = {
            "\z\ace\addons\nametags\UI\icons_france\private_gs.paa",
            "\z\ace\addons\nametags\UI\icons_france\corporal_gs.paa",
            "\z\ace\addons\nametags\UI\icons_france\sergeant_gs.paa",
            "\z\ace\addons\nametags\UI\icons_france\lieutenant_gs.paa",
            "\z\ace\addons\nametags\UI\icons_france\captain_gs.paa",
            "\z\ace\addons\nametags\UI\icons_france\major_gs.paa",
            "\z\ace\addons\nametags\UI\icons_france\colonel_gs.paa"
        };

        class default_rank {
            name = "Default";
            icon = "";
            rank = -1;
        };
        class private {
            name = "Private";
            icon = "\z\ace\addons\nametags\UI\icons_france\private_gs.paa";
            rank = 0;
        };
        class corporal {
            name = "Corporal";
            icon = "\z\ace\addons\nametags\UI\icons_france\corporal_gs.paa";
            rank = 1;
        };
        class sergeant {
            name = "Sergeant";
            icon = "\z\ace\addons\nametags\UI\icons_france\sergeant_gs.paa";
            rank = 2;
        };
        class lieutenant {
            name = "Lieutenant";
            icon = "\z\ace\addons\nametags\UI\icons_france\lieutenant_gs.paa";
            rank = 3;
        };
        class captain {
            name = "Captain";
            icon = "\z\ace\addons\nametags\UI\icons_france\captain_gs.paa";
            rank = 4;
        };
        class major {
            name = "Major";
            icon = "\z\ace\addons\nametags\UI\icons_france\major_gs.paa";
            rank = 5;
        };
        class colonel {
            name = "Colonel";
            icon = "\z\ace\addons\nametags\UI\icons_france\colonel_gs.paa";
            rank = 6;
        };
    };
    class germany {
        name = "Germany";
        values[] = {
            QPATHTOF(data\german\OR-1 Soldat.paa),
            QPATHTOF(data\german\OR-4c Korporal.paa),
            QPATHTOF(data\german\OR-6a Feldwebel.paa),
            QPATHTOF(data\german\OF-1a Leutnant.paa),
            QPATHTOF(data\german\OF-2a Hauptmann.paa),
            QPATHTOF(data\german\OF-3 Major.paa),
            QPATHTOF(data\german\OF-5 Oberst.paa)
        };

        class default_rank {
            name = "Default";
            icon = "";
            rank = -1;
        };
        class or1_soldat {
            name = "OR-1 Soldat";
            icon = QPATHTOF(data\german\OR-1 Soldat.paa);
            rank = 0;
        };
        class or2_gefreiter {
            name = "OR-2 Gefreiter";
            icon = QPATHTOF(data\german\OR-2 Gefreiter.paa);
            rank = -1;
        };
        class or3a_bergefreiter {
            name = "OR-3a Obergefreiter";
            icon = QPATHTOF(data\german\OR-3a Obergefreiter.paa);
            rank = -1;
        };
        class or3b_hauptgefreiter {
            name = "OR-3b Hauptgefreiter";
            icon = QPATHTOF(data\german\OR-3b Hauptgefreiter.paa);
            rank = -1;
        };
        class or4a_stabsgefreiter {
            name = "OR-4a Stabsgefreiter";
            icon = QPATHTOF(data\german\OR-4a Stabsgefreiter.paa);
            rank = -1;
        };
        class or4b_oberstabsgefreiter {
            name = "OR-4b Oberstabsgefreiter";
            icon = QPATHTOF(data\german\OR-4b Oberstabsgefreiter.paa);
            rank = -1;
        };
        class or4c_korporal {
            name = "OR-4c Korporal";
            icon = QPATHTOF(data\german\OR-4c Korporal.paa);
            rank = 1;
        };
        class or4d_stabskorporal {
            name = "OR-4d Stabskorporal";
            icon = QPATHTOF(data\german\OR-4d Stabskorporal.paa);
            rank = -1;
        };
        class or5a_unteroffizier {
            name = "OR-5a Unteroffizier";
            icon = QPATHTOF(data\german\OR-5a Unteroffizier.paa);
            rank = -1;
        };
        class or5b_stabsunteroffizier {
            name = "OR-5b Stabsunteroffizier";
            icon = QPATHTOF(data\german\OR-5b Stabsunteroffizier.paa);
            rank = -1;
        };
        class or6a_feldwebel {
            name = "OR-6a Feldwebel";
            icon = QPATHTOF(data\german\OR-6a Feldwebel.paa);
            rank = 2;
        };
        class or6b_oberfeldwebel {
            name = "OR-6b Oberfeldwebel";
            icon = QPATHTOF(data\german\OR-6b Oberfeldwebel.paa);
            rank = -1;
        };
        class or7_hauptfeldwebel {
            name = "OR-7 Hauptfeldwebel";
            icon = QPATHTOF(data\german\OR-7 Hauptfeldwebel.paa);
            rank = -1;
        };
        class or8_stabsfeldwebel {
            name = "OR-8 Stabsfeldwebel";
            icon = QPATHTOF(data\german\OR-8 Stabsfeldwebel.paa);
            rank = -1;
        };
        class or9_oberstabsfeldwebel {
            name = "OR-9 Oberstabsfeldwebel";
            icon = QPATHTOF(data\german\OR-9 Oberstabsfeldwebel.paa);
            rank = -1;
        };

        class of1a_leutnant {
            name = "OF-1a Leutnant";
            icon = QPATHTOF(data\german\OF-1a Leutnant.paa);
            rank = 3;
        };
        class of1b_oberleutnant {
            name = "OF-1b Oberleutnant";
            icon = QPATHTOF(data\german\OF-1b Oberleutnant.paa);
            rank = -1;
        };
        class of2a_hauptmann {
            name = "OF-2a Hauptmann";
            icon = QPATHTOF(data\german\OF-2a Hauptmann.paa);
            rank = 4;
        };
        class of2b_stabshauptmann {
            name = "OF-2b Stabshauptmann";
            icon = QPATHTOF(data\german\OF-2b Stabshauptmann.paa);
            rank = -1;
        };
        class of3_major {
            name = "OF-3 Major";
            icon = QPATHTOF(data\german\OF-3 Major.paa);
            rank = 5;
        };
        class of4_oberstleunant {
            name = "OF-4 Oberstleunant";
            icon = QPATHTOF(data\german\OF-4 Oberstleunant.paa);
            rank = -1;
        };
        class of5_oberst {
            name = "OF-5 Oberst";
            icon = QPATHTOF(data\german\OF-5 Oberst.paa);
            rank = 6;
        };
        class of6_brigadegeneral {
            name = "OF-6 Brigadegeneral";
            icon = QPATHTOF(data\german\OF-6 Brigadegeneral.paa);
            rank = -1;
        };
    };

    class norwegian {
        name = "Norwegian";
        values[] = {
            QPATHTOF(data\norwegian\OR-1a-Menig.paa),
            QPATHTOF(data\norwegian\OR-4a-Korporal.paa),
            QPATHTOF(data\norwegian\OR-5a-Sersjant.paa),
            QPATHTOF(data\norwegian\OF-1b-Loytnant.paa),
            QPATHTOF(data\norwegian\OF-2-Kaptein.paa),
            QPATHTOF(data\norwegian\OF-3-Major.paa),
            QPATHTOF(data\norwegian\OF-5-Oberst.paa)
        };

        class default_rank {
            name = "Default";
            icon = "";
            rank = -1;
        };
        class or1a_menig {
            name = "OR-1a Menig";
            icon = QPATHTOF(data\norwegian\OR-1a-Menig.paa);
            rank = 0;
        };
        class or1b_ledende_menig {
            name = "OR-1b Ledende menig";
            icon = QPATHTOF(data\norwegian\OR-1b-Ledende-menig.paa);
            rank = -1;
        };
        class or2_visekorporal {
            name = "OR-2 Visekorporal";
            icon = QPATHTOF(data\norwegian\OR-2-Visekorporal.paa);
            rank = -1;
        };
        class or3_visekorporal_1klasse {
            name = "OR-3 Visekorporal 1 klasse";
            icon = QPATHTOF(data\norwegian\OR-3-Visekorporal-1klasse.paa);
            rank = -1;
        };
        class or4a_korporal {
            name = "OR-4a Korporal";
            icon = QPATHTOF(data\norwegian\OR-4a-Korporal.paa);
            rank = 1;
        };
        class or4b_korporal_1klasse {
            name = "OR-4b Korporal 1 klasse";
            icon = QPATHTOF(data\norwegian\OR-4b-Korporal-1klasse.paa);
            rank = -1;
        };
        class or5a_sersjant {
            name = "OR-5a Sersjant";
            icon = QPATHTOF(data\norwegian\OR-5a-Sersjant.paa);
            rank = 2;
        };
        class or5b_sersjant_1klasse {
            name = "OR-5b Sersjant 1 klasse";
            icon = QPATHTOF(data\norwegian\OR-5b-Sersjant-1klasse.paa);
            rank = -1;
        };
        class or6_oversersjant {
            name = "OR-6 Oversersjant";
            icon = QPATHTOF(data\norwegian\OR-6-Oversersjant.paa);
            rank = -1;
        };
        class or7_stabssersjant {
            name = "OR-7 Stabssersjant";
            icon = QPATHTOF(data\norwegian\OR-7-Stabssersjant.paa);
            rank = -1;
        };
        class or8_kommandersersjant {
            name = "OR-8 Kommandersersjant";
            icon = QPATHTOF(data\norwegian\OR-8-Kommandersersjant.paa);
            rank = -1;
        };
        class or9a_sersjantmajor {
            name = "OR-9a Sersjantmajor";
            icon = QPATHTOF(data\norwegian\OR-9a-Sersjantmajor.paa);
            rank = -1;
        };
        class or9b_sjefssersjant {
            name = "OR-9b Sjefssersjant";
            icon = QPATHTOF(data\norwegian\OR-9b-Sjefssersjant.paa);
            rank = -1;
        };

        class of1a_fenrik {
            name = "OF-1a Fenrik";
            icon = QPATHTOF(data\norwegian\OF-1a-Fenrik.paa);
            rank = -1;
        };
        class of1b_loytnant {
            name = "OF-1b Loytnant";
            icon = QPATHTOF(data\norwegian\OF-1b-Loytnant.paa);
            rank = 3;
        };
        class of2_kaptein {
            name = "OF-2 Kaptein";
            icon = QPATHTOF(data\norwegian\OF-2-Kaptein.paa);
            rank = 4;
        };
        class of3_major {
            name = "OF-3 Major";
            icon = QPATHTOF(data\norwegian\OF-3-Major.paa);
            rank = 5;
        };
        class of4_oberstlOytnant {
            name = "OF-4 OberstlOytnant";
            icon = QPATHTOF(data\norwegian\OF-4-OberstlOytnant.paa);
            rank = -1;
        };
        class of5_oberst {
            name = "OF-5 Oberst";
            icon = QPATHTOF(data\norwegian\OF-5-Oberst.paa);
            rank = 6;
        };
        class of6_brigader {
            name = "OF-6 Brigader";
            icon = QPATHTOF(data\norwegian\OF-6-Brigader.paa);
            rank = -1;
        };
        class of7_generalmajor {
            name = "OF-7 Generalmajor";
            icon = QPATHTOF(data\norwegian\OF-7-Generalmajor.paa);
            rank = -1;
        };
        class of8_generalloytnant {
            name = "OF-8 Generalloytnant";
            icon = QPATHTOF(data\norwegian\OF-8-Generalloytnant.paa);
            rank = -1;
        };
        class of9_general {
            name = "OF-9 General";
            icon = QPATHTOF(data\norwegian\OF-9-General.paa);
            rank = -1;
        };
    };

    class swedish {
        name = "Swedish";
        values[] = {
            QPATHTOF(data\blank.paa),
            QPATHTOF(data\swedish\OR-4_Korpral.paa),
            QPATHTOF(data\swedish\OR-6a_Sergeant.paa),
            QPATHTOF(data\swedish\OF-1b_Lojtnant.paa),
            QPATHTOF(data\swedish\OF-2_Kapten.paa),
            QPATHTOF(data\swedish\OF-3_Major.paa),
            QPATHTOF(data\swedish\OF-5_Overste.paa)
        };

        class default_rank {
            name = "Default";
            icon = "";
            rank = -1;
        };
        class or1_menig {
            name = "OR-1a Menig";
            icon = QPATHTOF(data\blank.paa);
            rank = 0;
        };
        class or1b_menig_1 {
            name = "OR-1b Menig 1";
            icon = QPATHTOF(data\swedish\OR-1b_Menig_1.paa);
            rank = -1;
        };
        class or1c_menig_1 {
            name = "OR-1c Menig 2";
            icon = QPATHTOF(data\swedish\OR-1c_Menig_2.paa);
            rank = -1;
        };
        class or2a_menig_3 {
            name = "OR-2a Menig 3";
            icon = QPATHTOF(data\swedish\OR-2a_Menig_3.paa);
            rank = -1;
        };
        class or2b_menig_4 {
            name = "OR-2b Menig 4";
            icon = QPATHTOF(data\swedish\OR-2b_Menig_4.paa);
            rank = -1;
        };
        class or3_vicekorpral {
            name = "OR-3 Vicekorpral";
            icon = QPATHTOF(data\swedish\OR-3_Vicekorpral.paa);
            rank = -1;
        };
        class or4_korpral {
            name = "OR-4 Korpral";
            icon = QPATHTOF(data\swedish\OR-4_Korpral.paa);
            rank = 1;
        };
        class or5a_furir {
            name = "OR-5a Furir";
            icon = QPATHTOF(data\swedish\OR-5a_Furir.paa);
            rank = -1;
        };
        class or5b_overfurir {
            name = "OR-5b Överfurir";
            icon = QPATHTOF(data\swedish\OR-5b_Overfurir.paa);
            rank = -1;
        };
        class or6a_sergeant {
            name = "OR-6a Sergeant";
            icon = QPATHTOF(data\swedish\OR-6a_Sergeant.paa);
            rank = 2;
        };
        class or6b_oversergeant {
            name = "OR-6b Översergeant";
            icon = QPATHTOF(data\swedish\OR-6b_Oversergeant.paa);
            rank = -1;
        };
        class or7_fanjunkare {
            name = "OR-7 Fanjunkare";
            icon = QPATHTOF(data\swedish\OR-7_Fanjunkare.paa);
            rank = -1;
        };
        class or7b_overfanjunkare {
            name = "OR-7b Överfanjunkare";
            icon = QPATHTOF(data\swedish\OR-7b_Overfanjunkare.paa);
            rank = -1;
        };
        class or8_forvaltare {
            name = "OR-8 Förvaltare";
            icon = QPATHTOF(data\swedish\OR-8_Forvaltare.paa);
            rank = -1;
        };
        class or9_regementsforvaltare {
            name = "OR-9 Regementsförvaltare";
            icon = QPATHTOF(data\swedish\OR-9_Regementsforvaltare.paa);
            rank = -1;
        };

        class of1a_fanrik {
            name = "OF-1a Fänrik";
            icon = QPATHTOF(data\swedish\OF-1a_Fanrik.paa);
            rank = -1;
        };
        class of1b_lojtnant {
            name = "OF-1b Löjtnant";
            icon = QPATHTOF(data\swedish\OF-1b_Lojtnant.paa);
            rank = 3;
        };
        class of2_kapten {
            name = "OF-2 Kapten";
            icon = QPATHTOF(data\swedish\OF-2_Kapten.paa);
            rank = 4;
        };
        class of3_major {
            name = "OF-3 Major";
            icon = QPATHTOF(data\swedish\OF-3_Major.paa);
            rank = 5;
        };
        class of4_overstelojtnant {
            name = "OF-4 Överstelöjtnant";
            icon = QPATHTOF(data\swedish\OF-4_Overstelojtnant.paa);
            rank = -1;
        };
        class of5_overste {
            name = "OF-5 Överste";
            icon = QPATHTOF(data\swedish\OF-5_Overste.paa);
            rank = 6;
        };
    };

    class sweden: swedish {
        name = "Sweden";
        replace = "swedish";
    };

    class finnish {
        name = "Finnish";
        values[] = {
            QPATHTOF(data\finnish\fdf_OR1_sotamies.paa),
            QPATHTOF(data\finnish\fdf_OR3_alikersantti.paa),
            QPATHTOF(data\finnish\fdf_OR4_kersantti.paa),
            QPATHTOF(data\finnish\fdf_OF1_ltn.paa),
            QPATHTOF(data\finnish\fdf_OF2_kapt.paa),
            QPATHTOF(data\finnish\fdf_OF3_maj.paa),
            QPATHTOF(data\finnish\fdf_OF5_ev.paa)
        };

        class default_rank {
            name = "Default";
            icon = "";
            rank = -1;
        };
        class or2_jaak {
            name = "OR-2 Jääkäri";
            icon = QPATHTOF(data\blank.paa);
            rank = 0;
        };
        class or3_korpr {
            name = "OR-3 Korpraali";
            icon = QPATHTOF(data\finnish\fdf_OR3_korpraali.paa);
            rank = -1;
        };
        class or4_alik {
            name = "OR-4 Alikersantti";
            icon = QPATHTOF(data\finnish\fdf_OR4_alikersantti.paa);
            rank = 1;
        };
        class or5_kessu {
            name = "OR-5 Kersantti";
            icon = QPATHTOF(data\finnish\fdf_OR5_kersantti.paa);
            rank = 2;
        };
        class or6_ylik {
            name = "OR-6 Ylikersantti";
            icon = QPATHTOF(data\finnish\fdf_OR6_ylikersantti.paa);
            rank = -1;
        };
        class or7_vaap {
            name = "OR-7 Vääpeli";
            icon = QPATHTOF(data\finnish\fdf_OR7_vaapeli.paa);
            rank = -1;
        };
        class or8_ylivaap {
            name = "OR-8 Ylivääpeli";
            icon = QPATHTOF(data\finnish\fdf_OR8_ylivaap.paa);
            rank = -1;
        };
        class or9_sotmest {
            name = "OR-9 Sotilasmestari";
            icon = QPATHTOF(data\finnish\fdf_OR9_sotmest.paa);
            rank = -1;
        };

        class of1a_vanr {
            name = "OF-1a Vänrikki";
            icon = QPATHTOF(data\finnish\fdf_OF1_vanr.paa);
            rank = -1;
        };
        class of1b_ltn {
            name = "OF-1b Luutnantti";
            icon = QPATHTOF(data\finnish\fdf_OF1_ltn.paa);
            rank = 3;
        };
        class of1c_ylil {
            name = "OF-1c Yliluutnantti";
            icon = QPATHTOF(data\finnish\fdf_OF1_ylil.paa);
            rank = -1;
        };
        class of2_kapteeni {
            name = "OF-2 Kapteeni";
            icon = QPATHTOF(data\finnish\fdf_OF2_kapt.paa);
            rank = 4;
        };
        class of3_majuri {
            name = "OF-3 Majuri";
            icon = QPATHTOF(data\finnish\fdf_OF3_maj.paa);
            rank = 5;
        };
        class of4_evl {
            name = "OF-4 Everstiluutnantti";
            icon = QPATHTOF(data\finnish\fdf_OF4_evl.paa);
            rank = -1;
        };
        class of5_ev {
            name = "OF-5 Eversti";
            icon = QPATHTOF(data\finnish\fdf_OF5_ev.paa);
            rank = 6;
        };
    };

    class slovenian {
        name = "Slovenian";
        values[] = {
            QPATHTOF(data\slovenian\OR-1.paa),
            QPATHTOF(data\slovenian\OR-3.paa),
            QPATHTOF(data\slovenian\OR-5.paa),
            QPATHTOF(data\slovenian\OF-1a.paa),
            QPATHTOF(data\slovenian\OF-2.paa),
            QPATHTOF(data\slovenian\OF-3.paa),
            QPATHTOF(data\slovenian\OF-9.paa)
        };

        class default_rank {
            name = "Default";
            icon = "";
            rank = -1;
        };
        class or1_vojak {
            name = "OR-1 Vojak (PVT)";
            icon = QPATHTOF(data\slovenian\OR-1.paa);
            rank = 0;
        };
        class or2_poddesetnik {
            name = "OR-2 Poddesetnik (LCP)";
            icon = QPATHTOF(data\slovenian\OR-2.paa);
            rank = -1;
        };
        class or3_desetnik {
            name = "OR-3a Desetnik (CPL)";
            icon = QPATHTOF(data\slovenian\OR-3.paa);
            rank = 1;
        };
        class or4_naddesetnik {
            name = "OR-4 Naddesetnik (MCP)";
            icon = QPATHTOF(data\slovenian\OR-4.paa);
            rank = -1;
        };
        class or5_vodnik {
            name = "OR-5 Vodnik (SRG)";
            icon = QPATHTOF(data\slovenian\OR-5.paa);
            rank = 2;
        };
        class or6_visji_vodnik {
            name = "OR-6 Višji vodnik (SSG)";
            icon = QPATHTOF(data\slovenian\OR-6.paa);
            rank = -1;
        };
        class or7_stabni_vodnik {
            name = "OR-7 Štabni vodnik (SFC)";
            icon = QPATHTOF(data\slovenian\OR-7.paa);
            rank = 1;
        };
        class or8a_visji_stabni_vodnik {
            name = "OR-8a Višji štabni vodnik (MSG)";
            icon = QPATHTOF(data\slovenian\OR-8a.paa);
            rank = -1;
        };
        class or8b_praprscak {
            name = "OR-8b Praporščak (FSG)";
            icon = QPATHTOF(data\slovenian\OR-8b.paa);
            rank = -1;
        };
        class or9a_visji_praporscak {
            name = "OR-9a Višji praporščak (SGM)";
            icon = QPATHTOF(data\slovenian\OR-9a.paa);
            rank = -1;
        };
        class or9b_stabni_praporscak {
            name = "OR-9b Štabni praporščak (CSG)";
            icon = QPATHTOF(data\slovenian\OR-9b.paa);
            rank = 2;
        };
        class or9c_visji_stabni_praporscak {
            name = "OR-9c Višji štabni praporščak (SMAF)";
            icon = QPATHTOF(data\slovenian\OR-9c.paa);
            rank = -1;
        };


        class of1a_porocnik {
            name = "OF-1a Poročnik (2LT)";
            icon = QPATHTOF(data\slovenian\OF-1a.paa);
            rank = 3;
        };
        class of1b_nadporocnik {
            name = "OF-1b Nadporočnik (1LT)";
            icon = QPATHTOF(data\slovenian\OF-1b.paa);
            rank = -1;
        };
        class of2_stotnik {
            name = "OF-2a Stotnik (CPT)";
            icon = QPATHTOF(data\slovenian\OF-2.paa);
            rank = 4;
        };
        class of3_major {
            name = "OF-3 Major (MAJ)";
            icon = QPATHTOF(data\slovenian\OF-3.paa);
            rank = 5;
        };
        class of4_podpolkovnik {
            name = "OF-4 Podpolkovnik (LTC)";
            icon = QPATHTOF(data\slovenian\OF-4.paa);
            rank = -1;
        };
        class of5_polkovnik {
            name = "OF-5 Polkovnik (COL)";
            icon = QPATHTOF(data\slovenian\OF-5.paa);
            rank = 6;
        };
        class of6_brigadni_general {
            name = "OF-6 Brigadni general (BG)";
            icon = QPATHTOF(data\slovenian\OF-6.paa);
            rank = -1;
        };
        class of7_generalmajor {
            name = "OF-7 Generalmajor (MG)";
            icon = QPATHTOF(data\slovenian\OF-7.paa);
            rank = -1;
        };
        class of8_generalpodpolkovnik {
            name = "OF-8 Generalpodpolkovnik (LG)";
            icon = QPATHTOF(data\slovenian\OF-8.paa);
            rank = -1;
        };
        class of9_general_polkovnik {
            name = "OF-9 General polkovnik (GEN)";
            icon = QPATHTOF(data\slovenian\OF-9.paa);
            rank = 7;
        };

    };

};
