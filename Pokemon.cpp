#include <iostream>
#include <string>
using namespace std;
class Pokemon
{
private:
string name;
int level;
int hp, hpMax;
int attack,defense,specialAttack,specialDefense,speed;
public:

Pokemon(int index)
{
}

~Pokemon()
{
}

string get_name()
{
	return name;
}

int get_level()
{
	return level;
}

int get_hpMax()
{
	return hpMax;
}

int get_hp()
{
	return hp;
}

};
int main()
{
	return 0;
}

