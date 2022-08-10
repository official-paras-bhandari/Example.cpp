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
};
struct AiStats{
    int health;
    int level;//member
    Vector2D location;//Creating Object
void setLocation(float p, float q)
    {
        location.x = p;
        location.y = q;
    }
Vector2D getLocation(){ //Returing location to Vector2D
        return location;
    }
    
}rat{20,30},alien{50,30};//;//Creating instance 
int main()
{
    cout<<rat.health<<endl;
    cout<<alien.health<<endl;
    cout<<rat.level<<endl;
    cout<<alien.level<<endl;
    cout<<rat.location.x<<endl;
    AiStats Player1;
    Player1.setLocation(5,6);
    Vector2D vector = Player1.getLocation();
    cout<<vector.y;
    cout<<Player1.location.x;
    cout<<Player1.getLocation().x;
}