#include <iostream>
using namespace std;

class Enemy{
    public:
        Enemy(){
            ++s_EnemyCout;
            cout << "An Enemy As Entered the game" << endl;
            cout << "Current Enemies: " << s_EnemyCout << endl;
        }
        ~Enemy(){ 
            --s_EnemyCout;
            cout << "An Enemy As Entered the game" << endl;
            cout << "Current Enemies: " << s_EnemyCout << endl;
        }
    private:
        static int s_EnemyCout; 
};
int Enemy::s_EnemyCout = 0;

int main(){
    Enemy enemy1;
    {
        Enemy enemy2,enemy3;//Compund statement
    }
    Enemy *enemy4 = new Enemy;
    delete enemy4;//Destruction is invoked
    return 0;
}