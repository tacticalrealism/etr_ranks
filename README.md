
# ETR Enhanced Ranks

Mod that adds a multitude of more ranks into Arma 3.




## Contributing

To help and build the mods read this.

Due to the use of the [ACE-Framework](https://github.com/acemod/arma-project-template), or some modified variant of it, it is possible to easily build the ETR mods.
And due to the use of the [CBA-Framework](https://github.com/CBATeam/CBA_A3) it is possible to develop when running the game, with some exceptions.

The mods are composed out of components, better knows as addons, each component has a `script_component.hpp` file. This file houses all the necessary data for the component.
Using this system it's possible to disable compile caching of that component, this means that functions won't be cached and thus can be recompiled mid-game, do this by starting the game with the `-preprocDefine=DEV_<component>` parameter, so to disable it for the main component use `-preprocDefine=DEV_MAIN`. You can use multiple parameters at once.
When this is done, and the game is started with file-patching enabled, it's possible to update SQF code without rebuilding the mod and restarting the game.

You can do this by using the following piece of code in the debug console: `[] call ACE_PREP_RECOMPILE;`.
Once this is run any components with disabled cache will recompile their functions.

For this to properly work you must use the `dev.bat` file of the mod, and link the mod with the use of `create Z-folder symlinks (run as admin).bat`, found in the tools folder, to the Arma 3 Root folder.
This bat file will create a `z` folder which will house all etr-mods, these will then link to the correct files/functions automatically.

