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

Pokemon* make_pokemon(element tempElement, string tempName)
{
	
	
	if(tempElement == element::Fire)
	{
		Fire* tempPokemon;
	}
	if(tempElement == element::Water)
	{
		Water* tempPokemon;
	}
	if(tempElement == element::Grass)
	{
		Fire* tempPokemon;
	}
	&tempPokemon.name=tempName;
	return tempPokemon;
}

int main()
{
	return 0;
}

