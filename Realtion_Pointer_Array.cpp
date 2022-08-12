#include <iostream>
using namespace std;
int main()
{
    int dmeoArray[]{1,2,3};
    cout <<dmeoArray<<endl;
    cout << &dmeoArray<<endl;
    int *ptr{dmeoArray};
    cout << ptr<<endl;
    cout <<*ptr<<endl;
    cout <<ptr[2]<<endl;
}