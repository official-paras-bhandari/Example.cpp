#include <iostream>
using namespace std;
 char loop{};
 
int getInputHealth()
{   int temphealth{};
    cout << "Enter the Character health: ";
    cin >> temphealth;
    return temphealth;
}
//stub
int playerdamage()
{   
    return 25;
}
int totaldamage(int characterhealth,int damage)
{
  int temphealth  = characterhealth - damage;
  if (temphealth <=0)
  {   
    return 0;
  }
  else{
    return temphealth;
  }
}


int main(){
    do{ 
        int characterhealth{}, damage{};
        
    characterhealth = getInputHealth();
    damage = playerdamage();
  int charactergotHit=  totaldamage(characterhealth,damage);
  cout << charactergotHit;
  cout<<endl<<"Enter any \'Y\' or \'y\' to loop: ";
  cin >>loop ;
      }
while(loop=='Y'||loop=='y');
return 0;
}