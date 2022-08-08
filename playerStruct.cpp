#include <iostream>
using namespace std;
struct Vector2D{
    int x,y;
};
struct PlayerStats{
    int health;
    int level;
    int mana;
    int xp;
}Player;
struct AiStats{
    int health;
    int level;
    Vector2D location;//Creating instance of Vector2D
}rat{10,20,{5}},alien{20,30};
int main()
{
    cout<<rat.health<<endl;
    cout<<alien.health;
    cout<<rat.level<<endl;
    cout<<alien.level<<endl;
    cout<<rat.location.x<<endl;
    }