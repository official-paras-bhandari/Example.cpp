#include <iostream>
using namespace std;

struct PlayerDemo
{
    int x;
    float y;
};

int main()
{
    PlayerDemo demo{10,20};// create player Object instsnce called demo
    cout << demo.x<<" "<<demo.y<<endl;
}