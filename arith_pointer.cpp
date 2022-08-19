#include <iostream>
using namespace std;
int main()
{
    int demo []={1,2,3};
    int *ptr {demo};
    
    // *(ptr+1) =700;
    // *(demo+2) =7;
    // cout <<*(ptr+1) << endl;
    // cout << *(demo+2)<< endl;
    cout << &demo[1] << endl;
    cout << ptr[1] << endl;
    cout << demo+1 << endl;
    cout << ptr+1 << endl;    
}