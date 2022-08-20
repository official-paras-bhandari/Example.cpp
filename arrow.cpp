#include <iostream>
using namespace std;

struct GameState{
    int currenthealth = 3;
    int getCurrentHealth()
    {
        return currenthealth;
    }    
};

int main()
{   GameState state;
    GameState *ptr = &state;
    cout << ptr->getCurrentHealth()<<endl;
    GameState *gameState = new GameState;
    cout<< gameState->getCurrentHealth()<<endl;
    cout <<  (*gameState).getCurrentHealth() << endl;
} 