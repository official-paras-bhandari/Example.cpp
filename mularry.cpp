#include <iostream>

using namespace std;

int main()
{
    const int Row =2;
    const int Col =3;
    
    int xpGainPerEncounter [Row][Col]
    {
        {4,2,3},
        {5,6,7}
    };
    cout << xpGainPerEncounter[1][2]<<endl;

    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            cout << xpGainPerEncounter[j][i];
        }
        cout<<endl;
    }

}