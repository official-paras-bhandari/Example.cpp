#include <iostream>
using namespace std;
int main()
{
    int x{},y{};
    cout << boolalpha <<endl;
    cout << "Enter first value: ";
    cin >> x;
    cout << "Enter second value: ";
    cin >> y;
    cout << x <<"=="<< y<<":"<<(x==y);
    cout <<"!"<< x <<"!="<< y<<":"<<!(x!=y);
}
