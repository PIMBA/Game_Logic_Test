#pragma once
#include "Game_Battler.h"
#include "Game_Equipment.h"
#include "Game_Item.h"
class Game_Enemy:
	public Game_Battler
{
protected:
	Game_Equipment ** _Equipment;
	Game_Item ** _Item;
	long _AwordMoney;
public:
	Game_Enemy(void);
	~Game_Enemy(void);
};

