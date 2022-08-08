#include <iostream>
using namespace std;
int main()
{
    int powerLevel = 0;
    if (powerLevel > 0)
    {
        if (powerLevel > 9000)
        {
            cout << "WOOW HOO YOUR STRONG";
        }
         else
        {
            cout << "you are Weak";
        }
    }
    else
    {
        if(powerLevel==0)
        {
            cout << "you are just nobody";
        }
        else
        {
            cout << "you are dead";
        }
    }
}