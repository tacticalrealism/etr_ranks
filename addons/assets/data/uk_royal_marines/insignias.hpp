class uk_royal_marines {
    name = "UK Royal Marines";
    values[] = {    // These values are used for the automatic conversion of default Arma ranks.
        QPATHTOF(data\blank.paa),
        QPATHTOF(data\uk_royal_marines\corporal.paa),
        QPATHTOF(data\uk_royal_marines\sergeant.paa),
        QPATHTOF(data\uk_royal_marines\lieutenant.paa),
        QPATHTOF(data\uk_royal_marines\captain.paa),
        QPATHTOF(data\uk_royal_marines\major.paa),
        QPATHTOF(data\uk_royal_marines\colonel.paa)
    };

    class default_rank {
        name = "Default";
        icon = "";
        rank = -1;
    };
    class marine {
        name = "Marine";
        icon = QPATHTOF(data\blank.paa);
        rank = 0; // First in vanilla ranks.
    };
    class lance_corporal {
        name = "Lance Corporal";
        icon = QPATHTOF(data\uk_royal_marines\lance_corporal.paa);
        rank = -1; // No standard Arma rank.
    };
    class corporal {
        name = "Corporal";
        icon = QPATHTOF(data\uk_royal_marines\corporal.paa);
        rank = 1; // Second in vanilla ranks.
    };
    class sergeant {
        name = "Sergeant";
        icon = QPATHTOF(data\uk_royal_marines\sergeant.paa);
        rank = 2; // Third in vanilla ranks.
    };
    class colour_sergeant {
        name = "Colour Sergeant";
        icon = QPATHTOF(data\uk_royal_marines\colour_sergeant.paa);
        rank = -1; // No standard Arma rank.
    };
    class warrant_officer_class_two {
        name = "Warrant Officer Class Two";
        icon = QPATHTOF(data\uk_royal_marines\warrant_officer_class_two.paa);
        rank = -1; // No standard Arma rank.
    };
    class warrant_officer_class_one {
        name = "Warrant Officer Class One";
        icon = QPATHTOF(data\uk_royal_marines\warrant_officer_class_one.paa);
        rank = -1; // No standard Arma rank.
    };
    class second_lieutenant {
        name = "Second Lieutenant";
        icon = QPATHTOF(data\uk_royal_marines\second_lieutenant.paa);
        rank = -1; // No standard Arma rank.
    };
    class lieutenant {
        name = "Lieutenant";
        icon = QPATHTOF(data\uk_royal_marines\lieutenant.paa);
        rank = 3; // Forth in vanilla ranks.
    };
    class captain {
        name = "Captain";
        icon = QPATHTOF(data\uk_royal_marines\captain.paa);
        rank = 4; // Fifth in vanilla ranks.
    };
    class major {
        name = "Major";
        icon = QPATHTOF(data\uk_royal_marines\major.paa);
        rank = 5; // Sixth in vanilla ranks.
    };
    class lieutenant_colonel {
        name = "Lieutenant Colonel";
        icon = QPATHTOF(data\uk_royal_marines\lieutenant_colonel.paa);
        rank = -1; // No standard Arma rank.
    };
    class colonel {
        name = "Colonel";
        icon = QPATHTOF(data\uk_royal_marines\colonel.paa);
        rank = 6; // Seventh in vanilla ranks.
    };
    class brigadier {
        name = "Brigadier";
        icon = QPATHTOF(data\uk_royal_marines\brigadier.paa);
        rank = -1; // No standard Arma rank.
    };
    class major_general {
        name = "Major General";
        icon = QPATHTOF(data\uk_royal_marines\major_general.paa);
        rank = -1; // No standard Arma rank.
    };
    class lieutenant_general {
        name = "Lieutenant General";
        icon = QPATHTOF(data\uk_royal_marines\lieutenant_general.paa);
        rank = -1; // No standard Arma rank.
    };
    class general {
        name = "General";
        icon = QPATHTOF(data\uk_royal_marines\general.paa);
        rank = -1; // No standard Arma rank.
    };
};
