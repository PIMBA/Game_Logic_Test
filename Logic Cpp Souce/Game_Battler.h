#pragma once
//#include "Include.h"
#include "Game_Skill.h"
#include "Game_State.h"
typedef int AT;
#define AT_Speed 1
class Game_Skill;
class Game_Battler
{
protected:
	AT _At;
    Game_Skill * _Skill;
	long  _Hp;
	AT _St;//行动力
	int _Attack;
	int _Defence;
	int * _Conf;
	Game_State ** _State;
	double _Crit;//暴击
	int _Hit;//命中
public:
	Game_Battler();
	~Game_Battler(void);
};

