#include "Enemy.h"

using namespace std;

Enemy::Enemy(string name, int maxHealth, int atk, int defense, int spd) : Character(name,maxHealth,atk,defense,spd) 

int Enemy::attack(Player &x)
{
  if (x.getBoolDef() == true)
  {
    int damageDone = ((x.getDefense()/100)*this->getAtk()) - x.getDefense();
    if (damageDone > 0)
    {
      x.setDmgTaken(damgeDone+x.getDmgTaken());
      x.setBoolDef(false);
      return damageDone;
    }
    else
    {
      x.setBoolDef(false);
      return 0;
    }
  }
  else
  {
    int damageDone1 = ((x.getDefense()/100)*this->getAtk());
    x.setDmgTaken(damageDone1+x.getDmgTaken());
    return damageDone1;
  }
}
