class CfgVehicles
{
    class B_Soldier_base_F;

    class foul_creature_basic : B_Soldier_base_F
    {
        author = "LilyRose";
        scope = 2;
        scopeCurator = 2;
        displayname = "Skitterer";
        faction = "FoulCreatures";
        editorSubcategory = "EdSubcat_Personel";
        identityTypes[]= {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
        uniformClass = "U_BasicBody" ;//also placeholder
        hiddenSelectionTextures[] = {"placeholder"};
        model ="placeholder";

    };
};