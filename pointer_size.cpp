#include <iostream>
using namespace std;

struct PlayerStats{
short int health;

int level;
}Player1;

int main(){
PlayerStats *Player{&Player1};
cout <<sizeof Player<<endl;
cout <<sizeof Player1<<endl;
short int x = Player1.health;
cout <<sizeof x; 
return 0;
}