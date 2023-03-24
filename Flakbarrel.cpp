class FlakBarrel : DoomWeapon replaces Shotgun //Custom Shotgun for DOOM II, made in ZScript (C++), code by snorrbrod
{
 	Default
	{
		Weapon.SelectionOrder 1900;
		Weapon.SlotNumber 3;
		Weapon.AmmoUse 2;
		Weapon.AmmoGive 16;
		Weapon.AmmoType "Shell";
		Weapon.BobStyle "Smooth";
		Weapon.BobRangeX 0.0;
		Weapon.BobSpeed 1.5;
		Inventory.Pickupmessage "You got the Flak Barrel, go scatter some lead!";
		Tag "FlakBarrel";
	}
	States
	{
	Ready:
		FLAK A 1 A_WeaponReady(WRF_ALLOWRELOAD);
		Loop;
	Deselect:
		FLAK A 1 Offset(0,34);
		FLAK A 1 Offset(0,36);
		FLAK A 1 Offset(0,40);
		FLAK A 1 Offset(0,48);
		FLAK A 1 Offset(0,56);
		FLAK A 1 Offset(0,70);
		FLAK A 1 Offset(0,82);
		FLAK A 1 Offset(0,90);
	FinishLower:
		FLAK A 0 A_Lower;
		Loop;
	Select:
		FLAK A 1 Offset(0,90);
		FLAK A 1 Offset(0,82);
		FLAK A 1 Offset(0,70);
		FLAK A 1 Offset(0,56);
		FLAK A 1 Offset(0,48);
		FLAK A 1 Offset(0,40);
		FLAK A 1 Offset(0,36);
		FLAK A 1 Offset(0,34);
	FinishSelect:
		FLAK A 0 A_Raise;
		Loop;
	Fire:
		FLAK A 1;
		FLAK A 0 A_FireBullets(0, 0, -1, 20, "BulletPuff", FBF_USEAMMO|FBF_NORANDOM|FBF_EXPLICITANGLE);
		// spread_horz, spread_vert, numbullets, damage, pufftype, flags
		FLAK A 0 A_FireBullets(2, 0, -1, 20, "BulletPuff", FBF_NORANDOM|FBF_EXPLICITANGLE);
		FLAK A 0 A_FireBullets(-2, 0, -1, 20, "BulletPuff", FBF_NORANDOM|FBF_EXPLICITANGLE);
		FLAK A 0 A_FireBullets(1.5, 1.5, -1, 20, "BulletPuff", FBF_NORANDOM|FBF_EXPLICITANGLE);
		FLAK A 0 A_FireBullets(-1.5, 1.5, -1, 20, "BulletPuff", FBF_NORANDOM|FBF_EXPLICITANGLE);
		FLAK A 0 A_FireBullets(1.5, -1.5, -1, 20, "BulletPuff", FBF_NORANDOM|FBF_EXPLICITANGLE);
		FLAK A 0 A_FireBullets(-1.5, -1.5, -1, 20, "BulletPuff", FBF_NORANDOM|FBF_EXPLICITANGLE);
		FLAK B 1 Bright A_PlaySound ("CRACKOW", CHAN_WEAPON);
		FLAK B 1 Bright Offset(0,35);
		FLAK B 1 Bright Offset(0,38);
		FLAK C 1 Bright Offset(0,40);
		FLAK C 1 Bright Offset(0,41);
		FLAK C 1 Bright Offset(0,40);
		FLAK D 1 Offset(-1,52);
		FLAK D 1 Offset(-3,48);
		FLAK D 1 Offset(-6,43);
		FLAK D 1 Offset(-10,37);
		FLAK D 1 Offset(-12,34);
		FLAK D 1 Offset(-14,31);
		FLAK E 1 Offset(-19,28);
		FLAK E 1 Offset(-25,27);
		FLAK E 1 Offset(-31,28);
		FLAK E 1 Offset(-33,29);
		FLAK E 1 Offset(-35,31);
		FLAK E 1 Offset(-38,37);
		FLAK F 1 Offset(-40,43);
		FLAK F 1 Offset(-41,46);
		FLAK F 1 Offset(-41,48);
		FLAK F 1 Offset(-42,52);
		FLAK F 1 Offset(-42,52); 
		FLAK F 1 Offset(-41,48);
		FLAK F 1 Offset(-40,44);
		FLAK E 2 Offset(-38,37);
		FLAK E 1 Offset(-35,31);
		FLAK E 2 Offset(-31,28);
		FLAK E 1 Offset(-24,27);
		FLAK E 1 Offset(-17,28);
		FLAK D 1 Offset(-12,31);
		FLAK D 1 Offset(-9,37);
		FLAK D 1 Offset(-6,38);
		FLAK D 1 Offset(-4,37);
		FLAK D 1 Offset(-1,35);
		FLAK A 1 Offset(0,34);
		FLAK A 1 Offset(0,34);
		FLAK A 4 Offset(0,32);
		NTSG A 0 A_CheckForReload(6,"FireDone");
	Reload:
		FLAK A 1 Offset(0,34);
		FLAK A 1 Offset(0,35);
		FLAK A 1 Offset(0,36);
		FLAK A 1 Offset(0,40);
		FLAK A 1 Offset(0,44);
		FLAK A 1 Offset(0,48);
		FLAK A 1 Offset(0,56);
		FLAK A 1 Offset(0,64);
		FLAK A 1 Offset(0,72);
		FLAK A 1 Offset(0,80);
		FLAK A 1 Offset(0,88);
		FLAK A 1 Offset(0,96);
		FLAK A 1 Offset(0,104);
		FLAK A 1 Offset(0,112);
		FLAK A 1 Offset(0,116);
		FLAK G 10 A_PlaySound("SHELLS", CHAN_WEAPON);
		FLAK G 10 A_PlaySound("SHELLS", CHAN_WEAPON);
		FLAK G 10 A_PlaySound("SHELLS", CHAN_WEAPON);
		FLAK G 10 A_PlaySound("PUMP", CHAN_WEAPON);
		FLAK G 1 A_ResetReloadCounter;
		FLAK G 1 Offset(0,110);
		FLAK H 1 Offset(0,100);
		FLAK H 1 Offset(0,90);
		FLAK I 1 Offset(0,80);
		FLAK I 1 Offset(0,72);
		FLAK I 1 Offset(0,68);
		FLAK H 1 Offset(0,64);
		FLAK H 1 Offset(0,60);
		FLAK H 1 Offset(0,56);
		FLAK G 1 Offset(0,52);
		FLAK G 1 Offset(0,48);
		FLAK G 1 Offset(0,44);
		FLAK A 1 Offset(0,40);
		FLAK A 1 Offset(0,36);
		FLAK A 1 Offset(0,35);
		FLAK A 1 Offset(0,34);
		
	FireDone:
		FLAK A 0 A_ReFire;
		Goto Ready;
 	Spawn:
		FLKB A -1;
		Stop;
	}
}