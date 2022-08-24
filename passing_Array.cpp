#include <iostream>
using namespace std;

const int Size = 3;
void inputScore(int score[])//size
{   cout<< score<<endl; 
    for (int i = 0;i < Size;i++)
    {
       cin >> score[i];
    }
}
void printScore(const int *score)
{
    for (int i = 0; i < Size; i++)
    {
        cout<< score[i]<<endl;
    }
}

int main()
{
int score[Size];
inputScore(score);
printScore(score);
}