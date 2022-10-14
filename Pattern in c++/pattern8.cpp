#include <iostream>
using namespace std;

void diamond(int n)
{
    for (int i = 1, m = 1; i <= n; i++, m += 2)
    {
        for (int j = m; j < n * 2 - 1; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            int o = 0;
            cout << "*";
            if (k != (i * 2) - 1)
                cout << " ";
        }
        cout << endl;
    }
    for (int i = n - 1, m = i - 1; i >= 1; i--,
             m -= 2)
    {

        for (int j = m; j < n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            cout << "*";
            if (k != (i * 2) - 1)
                cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter any number : ";
    cin >> n;
    diamond(n);
}
