// for n = 5
// * * * * * 
// *       *
// *       *
// *       *
// * * * * * 

#include <iostream>
using namespace std;
int main()
{
    int a, n;
    cout << "Enter any no. : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
                cout << "* ";
            cout << endl;
        }
        else
        {
            cout << "*";
            a = 1;
            while (a < (n - 1) * 2)
            {
                cout << " ";
                a++;
            }
            cout << "*" << endl;
        }
    }
}
