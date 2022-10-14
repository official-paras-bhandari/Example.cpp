// * * * * *
//   * * * *
//     * * *
//       * *
//         *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any no. : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i, k = 1; j <= n; j++)
        {

            while (k != i * 2 - 1)
            {
                cout << " ";
                k++;
            }

            cout << "*";
            if (j != n)
                cout << " ";
        }
        cout << endl;
    }
}
