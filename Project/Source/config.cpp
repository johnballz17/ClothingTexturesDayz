class CfgPatches
{
  class project
  {
	  units[]=();
	  weapons[]=();
	  requiredVersion=0.1;
	  requiredAddons[]={
		"DZ_Data",
		"DZ_Scripts",
		  
	  }; 
  };

  
};

class CfgMods{
	class project
	{
		dir= "project";
		picture="";
		action="";
		hidename=1;
		hidepicture=1;
		name="My Project";
		credits="Johnnyballz";
		author="Whitename";
		version="1.0";
		type="mod";
		
		dependencies[]={"Game", "World", "Mission"}; 
		
		class defs
		{
			class gameScriptModule
			{
				value="";
				files={"project/Source/Scripts/3_Game"}
			};
			
			class worldScriptModule
			{
				value="";
				files={"project/Source/Scripts/4_World"}
			}; 
			
			class missionScriptModule
			{
				value="";
				files={"project/Source/Scripts/5_Mission"}
			}; 
			
		};
	};
};
