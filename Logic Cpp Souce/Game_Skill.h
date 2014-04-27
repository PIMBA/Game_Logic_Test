#pragma once
typedef int AT;
#include <string>
using namespace std;
#include "Game_Battler.h"
class Game_Battler;
class Game_Skill
{
protected:
	AT _AtBefore;
	AT _AtAfter;
	Game_Battler ** _Target;
	int _Attack;
	int AttackCal(Game_Battler *);
	int ID;
	string _Name;
public:
	Game_Skill(void);
	~Game_Skill(void);
};

