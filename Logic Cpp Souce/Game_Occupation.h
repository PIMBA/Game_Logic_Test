#pragma once

#include <string>
using namespace std;
class _Game_Occupation
{
	string _Name;
	int ID;
public:
	_Game_Occupation(void);
	~_Game_Occupation(void);
};

enum Game_Occupation
{
	A = 1,
	B,
	C
};
