#include <iostream>
using namespace std;

int main()
{
    int sentinel = 0;
    int temp = 0;
    int accumlate = 0;
    cout << "Enter a Number to add to ";
    cin >> temp;
    while (temp!=sentinel)
    {
        accumlate += temp;
        cin >> temp;
    }
    cout<<accumlate;
}