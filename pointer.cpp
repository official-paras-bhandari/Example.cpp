#include <iostream>

using namespace std;

int main()
{
    int demoVar = 5;
    int* demPtr = nullptr;
    cout << demPtr<<endl;
    demPtr=&demoVar;
    cout << demPtr<<endl;
    cout << *demPtr<<endl;
    return 0;
}