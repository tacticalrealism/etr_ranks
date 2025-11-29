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
