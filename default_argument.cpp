#include <iostream>

using namespace std;
int boosthealth(int health,int boosthealthed=15)
{
    return (health+boosthealthed);
} 
int main()
{
    int currenthealth = 25;
    cout << currenthealth <<endl;
    cout<<boosthealth(currenthealth)<<endl;
}
