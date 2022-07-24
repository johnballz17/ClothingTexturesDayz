 class CfgPatches
{
	class _Clothes
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
			requiredAddons[]={
			"DZ_Data",
			"DZ_Characters"
		};
		
	}; 
	
};

class CfgVehicles
{
	class TShirt_ColorBase;
	 
	 class TShirt_Pen: TShirt_ColorBase 
	 {
		 scope=2;
		 hiddenSelectionsTextures[]=
		 {
			 "project/source/clothes/tshirt_Pen.paa",
			 "project/source/clothes/tshirt_Pen.paa",
			 "project/source/clothes/tshirt_Pen.paa"
		 };
		 
	 };
	
};