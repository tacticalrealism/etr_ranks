class ww2_us_army {
    name = "WW2 US Army";
    values[] = {
        QPATHTOF(data\ww2_us_army\E-2_Private_First_Class.paa),
        QPATHTOF(data\ww2_us_army\E-3_Corporal.paa),
        QPATHTOF(data\ww2_us_army\E-4_Sergeant.paa),
        QPATHTOF(data\ww2_us_army\O-2_First_Lieutenant.paa),
        QPATHTOF(data\ww2_us_army\O-3_Captain.paa),
        QPATHTOF(data\ww2_us_army\O-4_Major.paa),
        QPATHTOF(data\ww2_us_army\O-6_Colonel.paa),
    };

    class default_rank {
        name = "Default";
        icon = "";
        rank = -1;
    };

    //Enlisted Ranks
    class e1_private {
        name = "E-1 Private";
        icon = QPATHTOF(data\blank.paa);
        rank = -1;
    };
    class e2_private_first_class {
        name = "E-2 Private First Class";
        icon = QPATHTOF(data\ww2_us_army\E-2_Private_First_Class.paa);
        rank = 0;
    };
    class e3_technician_fifth_grade {
        name = "E-3 Technician Fifth Grade";
        icon = QPATHTOF(data\ww2_us_army\E-3_Technician_Fifth_Grade.paa);
        rank = 1;
    };
    class e3_corporal {
        name = "E-3 Corporal";
        icon = QPATHTOF(data\ww2_us_army\E-3_Corporal.paa);
        rank = 1;
    };
    class e3_technician_fourth_grade {
        name = "E-4 Technician Fourth Grade";
        icon = QPATHTOF(data\ww2_us_army\E-4_Technician_Fourth_Grade.paa);
        rank = 1;
    };
    class e4_sergeant {
        name = "E-4 Sergeant";
        icon = QPATHTOF(data\ww2_us_army\E-4_Sergeant.paa);
        rank = 2;
    };
    class e3_technician_third_grade {
        name = "E-5 Technician Third Grade";
        icon = QPATHTOF(data\ww2_us_army\E-5_Technician_Third_Grade.paa);
        rank = 1;
    };
    class e5_staff_sergeant {
        name = "E-5 Staff Sergeant";
        icon = QPATHTOF(data\ww2_us_army\E-5_Staff_Sergeant.paa);
        rank = -1;
    };
    class e6_technical_sergeant {
        name = "E-6 Technical Sergeant";
        icon = QPATHTOF(data\ww2_us_army\E-6_Technical_Sergeant.paa);
        rank = -1;
    };
    class e7_first_sergeant {
        name = "E-7 First Sergeant";
        icon = QPATHTOF(data\ww2_us_army\E-7_First_Sergeant.paa);
        rank = -1;
    };
    class e7_master_sergeant {
        name = "E-7 Master Sergeant";
        icon = QPATHTOF(data\ww2_us_army\E-7_Master_Sergeant.paa);
        rank = -1;
    };

    //Officer Ranks
    class o1_second_lieutenant {
        name = "O-1 Second Lieutenant";
        icon = QPATHTOF(data\ww2_us_army\O-1_Second_Lieutenant.paa);
        rank = -1;
    };
    class o2_first_lieutenant {
        name = "O-2 First Lieutenant";
        icon = QPATHTOF(data\ww2_us_army\O-2_First_Lieutenant.paa);
        rank = 3;
    };
    class o3_captain {
        name = "O-3 Captain";
        icon = QPATHTOF(data\ww2_us_army\O-3_Captain.paa);
        rank = 4;
    };
    class o4_major {
        name = "O-4 Major";
        icon = QPATHTOF(data\ww2_us_army\O-4_Major.paa);
        rank = 5;
    };
    class o5_lieutenant_colonel {
        name = "O-5 Lieutenant Colonel";
        icon = QPATHTOF(data\ww2_us_army\O-5_Lieutenant_Colonel.paa);
        rank = -1;
    };
    class o6_colonel {
        name = "O-6 Colonel";
        icon = QPATHTOF(data\ww2_us_army\O-6_Colonel.paa);
        rank = 6;
    };
    class o7_brigadier_general {
        name = "O-7 Brigadier General";
        icon = QPATHTOF(data\ww2_us_army\O-7_Brigadier_General.paa);
        rank = -1;
    };
    class o7_major_general {
        name = "O-8 Major General";
        icon = QPATHTOF(data\ww2_us_army\O-8_Major_General.paa);
        rank = -1;
    };
    class o9_lieutenant_general {
        name = "O-9 Lieutenant General";
        icon = QPATHTOF(data\ww2_us_army\O-9_Lieutenant_General.paa);
        rank = -1;
    };
    class o10_general {
        name = "O-10 General";
        icon = QPATHTOF(data\ww2_us_army\O-10_General.paa);
        rank = -1;
    };
    class o11_general_of_the_army {
        name = "O-11 General of the Army";
        icon = QPATHTOF(data\ww2_us_army\O-11_General_of_the_Army.paa);
        rank = 20;
    };
};
