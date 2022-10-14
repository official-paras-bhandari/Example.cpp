// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include <iostream>
using namespace std;
int main()
{
    int n;
    int a = 1;
    cout << "Enter no. row: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            if (j < i)
                cout << " ";
            else
                cout << endl;
            a++;
        }
    }
}
