#include <iostream>
using namespace std;

struct GameStates{
    GameStates();
    GameStates(int m_levelp,int m_roomp);
    void setCurrentLevel (int m_levelp);
    int GetCurrentLevel();
    private:
    int m_level;
    int m_room;   
};
GameStates::GameStates()
:GameStates(3,4)//Assiging Vlaue to room and level;
{
    cout << "Constructor is Invoked"<<endl;
}
GameStates::GameStates(int m_levelp ,int m_roomp)
:m_level(m_levelp),m_room(m_roomp)
{
   cout<<"Overload Constructor is invoked"<<endl; 
}
void GameStates::setCurrentLevel(int m_levelp){
    m_level = m_levelp;
}

int GameStates::GetCurrentLevel(){
   return m_level;
}
int main(){
    GameStates entity1 ,entity2(6,8);//Calling Constructor
    entity1.GetCurrentLevel();
    entity2.GetCurrentLevel();
    return 0;
}