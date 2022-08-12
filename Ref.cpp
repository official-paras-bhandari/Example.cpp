#include <iostream>
using namespace std;
int main()
{
    int x{150},y{250};
    int &X_Ref = x;
    int *ptr =nullptr;
    ptr = &x;
    *ptr =44;
    cout << "*ptr: "<<*ptr << endl;
    cout << "XRef: "<<X_Ref << endl;
}