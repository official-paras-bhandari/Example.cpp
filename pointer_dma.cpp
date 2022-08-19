#include <iostream>
using namespace std;
int main()
{
    int x{5},y{12};
    int* ptr =new int;
    *ptr = 15;
    ptr = &x;
    cout << *ptr<<endl;
    cout << ptr<<endl;
 delete ptr;
 ptr = nullptr;
}