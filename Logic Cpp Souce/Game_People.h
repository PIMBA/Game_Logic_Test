#pragma once
#include "Game_Battler.h"
#include "Game_Tank.h"
#include "Game_Equipment.h"
#include "Game_Occupation.h"
class Game_Tank;
class Game_People :
	public Game_Battler
{
protected:
	Game_Tank * _HisTank;
	Game_Equipment ** _Equipment;
	int _Strength;
	Game_Occupation * _Occupation;
	int _Intell;
	int _Speed;//Ó°ÏìÃüÖĞ
	int _Agile;//Ó°Ïì±©»÷
public:
	Game_People(void);
	~Game_People(void);
};

