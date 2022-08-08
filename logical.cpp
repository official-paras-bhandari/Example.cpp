#include <iostream>
using namespace std;
int main()
{
    int health = 25;

    if (health<=5)
    {
        if (health ==0)
        {
            cout << "i am dead";
        }
        else
        {
            cout << "i am sick";
        }
        
    }

    else{
        if (!(health<=25||health >=75))
        {
            cout << "i am fine";
        }
       if(health>=75){
        cout << "i am fine";
       }
    }
  
}