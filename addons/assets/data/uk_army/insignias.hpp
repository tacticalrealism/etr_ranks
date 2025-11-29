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
