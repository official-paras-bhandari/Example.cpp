//     *
//    ***
//   *****
//  *******
// *********

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any no. ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
