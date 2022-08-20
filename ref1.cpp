#include <iostream>
using namespace std;
//Passing Pointer to Function;
void increment(int *x)
{
    cout << (*x)++<<endl;
}
int main()
{
    int score = 6;
    int *ptr = &score; //
    increment(ptr);
    cout <<score <<endl;
}