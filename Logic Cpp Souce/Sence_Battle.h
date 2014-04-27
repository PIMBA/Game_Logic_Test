#pragma once
#include "Sence_Base.h"
#include "Game_Battler.h"
#include "Game_Troop.h"
#include <list>
using namespace std;
class Sence_Battle:
	public Sence_Base
{
protected:
	list<Game_Battler *> AT_List;

public:
	Sence_Battle(void);
	void Main();
	void Sence_Ini(Game_Battler **,Game_Troop *);
	~Sence_Battle(void);
};

