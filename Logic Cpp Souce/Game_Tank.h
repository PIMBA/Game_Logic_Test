#pragma once
#include "Game_People.h"
#include "Game_Equipment.h"
#include "Game_State.h"

class Game_Equipment;
class Game_People;

class Game_Tank 
{
protected:
	Game_People * _Driver;
	Game_Equipment ** _Equipment;
	double _Weight;
	int _Sp;//×°¼×
	int _Defence;
	int * _Conf;
	Game_State  ** _State;
public:
	Game_Tank(void);
	~Game_Tank(void);
};

