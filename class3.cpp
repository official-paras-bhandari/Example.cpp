#include <iostream>
using namespace std;
class GameState{
    public:
    GameState();//Default constructor Declaration
    GameState(int x);//No Default Constructor Declaration
    void setCurrentLevel(int level);
    int getCurrentLevel();
    private:
    int currentLevel = 5;
};
    GameState::GameState()//Default constructor Definations
    {
        currentLevel  = 8;
    }
    GameState::GameState(int x);//No Default Constructor Definations And Overloading Cunstroctor
    {
        currentLevel = x; 
    }
    void GameState::setCurrentLevel(int level){
        currentLevel = level;
    }
    int GameState::getCurrentLevel(){
        return currentLevel;
    }
int main(){
    GameState game,game2(15); //Parameterized Constructor Object- second only  
    cout << game.getCurrentLevel() << endl;
     cout << game2.getCurrentLevel() << endl;
}