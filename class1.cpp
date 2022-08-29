#include <iostream>
using namespace std;

class GameState{
    public:
    int getCurrentHealth(){return currentLevel;}
    void setCurrentHealth(int level){currentLevel = level;}
    private:
    int currentLevel = 7;
};

int main(){ 
    int level{15};
    GameState *gameState = new GameState();
    gameState->setCurrentHealth(level);
    cout<< gameState->getCurrentHealth();
    return 0;
}