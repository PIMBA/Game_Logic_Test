#pragma once
#include <string>
using namespace std;
class Game_State
{
protected:
	int ID;
	string _Name;
	int Round;
public:
	Game_State(void);
	~Game_State(void);
};

