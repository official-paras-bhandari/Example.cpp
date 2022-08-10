#include <iostream>
using namespace std;
struct Vector2D{
    int x,y,z;
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
void setLocation(float p, float q,float r)
    {
        location.x = p;
        location.y = q;
        location.z = r;
    }
Vector2D getLocation(){ //Returing location to Vector2D
        return location;
    }
    
}rat{20,30},alien{50,30};//;//Creating instance 
int main()
{
   AiStats ai1 , ai2;//creating Object 
   AiStats aistas[]{ai1,ai2};//maming Object and having Arrays size
   cout<<aistas[1].getLocation().x;
}