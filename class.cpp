#include <iostream>
using namespace std;

class GameState{
    public:
    int setGameState(int level);
    int getGameState();
    private:
    int currentLevel{7};
};

int GameState::setGameState(int level)
{
    currentLevel = level;
}
int GameState::getGameState()
{
return currentLevel;
}
int main(){
 GameState game;
 game.setGameState(15);
 cout << game.getGameState();
}