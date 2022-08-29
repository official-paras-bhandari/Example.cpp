#include <iostream>
using namespace std;

struct GameStates{
    GameStates();
    GameStates &GSetCurrentRoom(int m_room);
    GameStates &GSetCurrentLevel(int m_level);
    void String();
    private:
    int m_level;
    int m_room;   
};
GameStates::GameStates()
:m_room(1),m_level(1)//Assiging Vlaue to room and level;
{
    cout << "Constructor is Invoked";
}
GameStates & GameStates::GSetCurrentRoom(int room)
{
    m_room = room;
    return *this;//returning derefercning to GameStates object(that is entity1);
}
GameStates & GameStates::GSetCurrentLevel(int level)
{
    m_level = level;
    return *this;
}
void GameStates::String(){
    cout << " current room: "<<m_room<<endl;
    cout << " current level: "<<m_level<<endl;
}
int main(){
    GameStates entity1;
    entity1.String();
    entity1.GSetCurrentRoom(5);
    entity1.GSetCurrentLevel(6);
    entity1.String();
}