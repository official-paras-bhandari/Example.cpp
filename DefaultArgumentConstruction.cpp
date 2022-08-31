#include <iostream>
using namespace std;

class GameStates{  
    public:
    void givedta();
    GameStates(int m_levelp=1,int m_roomp=1);    
    void GetCurrentLevel();
    private:
    int m_level;
    int m_room;   
};
GameStates::GameStates(int m_levelp ,int m_roomp)

:m_level(m_levelp),m_room(m_roomp)
{

}

void GameStates::GetCurrentLevel()
{   
cout << m_level << endl; 
cout << m_room << endl; 
}
void GameStates::givedta()
{
      cout << m_level << endl;
  cout << m_room << endl;
}
int main(){
    GameStates entity1,entity2(2);//OverWriting Paramater value
    entity1.GetCurrentLevel();
    entity2.GetCurrentLevel(); 

    return 0;
}