#include <iostream>
#include <string>
#include "Pokemon.h"
using namespace std;

string Pokemon::get_name()
{
	return name;
}

int Pokemon::get_level()
{
	return level;
}

int Pokemon::get_hpMax()
{
	return hpMax;
}

int Pokemon::get_hp()
{
	return hp;
}

int main()
{
	return 0;
}

