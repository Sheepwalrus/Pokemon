#include <iostream>
#include <string>
using namespace std;
enum class element{Fire, Water,Grass};
class Pokemon
{
private:
string name;
int level=1;
int hp=20, hpMax=10;
int attack=10,defense=10,specialAttack=10,specialDefense=10,speed=10;
public:

Pokemon(int index)
{
}

~Pokemon()
{
}
friend Pokemon* make_pokemon(element tempElement, string tempName);
//Getter Functions
string get_name();
int get_level();
int get_hpMax();
int get_hp();
};
class Fire: public Pokemon
{
	int index;	
	hp++;
	attack+=2;
	defense-=2;
	specialAttack+=4;
	specialDefense-=2;
	speed+=2;
};

class Water: public Pokemon(int index)
{
	int index;
	hp+=2;
	attack-=2;
	defense+=2;
	specialAttack-=1;
	specialDefense+=4;
	speed-=1;
};
class Grass: public Pokemon(int index)
{
	int index;
	hp-=3;
	attack-=2;
	defense+=0;
	specialAttack-=3;
	specialDefense+=0;
	speed-=2;
};
