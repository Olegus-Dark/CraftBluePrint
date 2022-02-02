class CfgPatches
{
	class CraftBluePrints
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts"};
	};
};
class CfgMods
{
	class CraftBluePrints
	{
		type = "mod";
		author = "Baron_KartFFeL";
		dir = "CraftBluePrint";
		name = "WHUT?";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				files[] = {"CraftBluePrint\scripts\4_World"};
			};
		};
	};
};