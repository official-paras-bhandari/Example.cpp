#include <iostream>
using namespace std;

int main()
{
    int arraysize{};
    cout << "Enter the amount of score should be added :";
    cin >> arraysize;
int *ptr = new int[arraysize];
cout<<"Enter the "<<arraysize <<"Scores";
    for (int i = 0; i < arraysize;i++)
    {
        cin >> ptr[i];
    }
    for (int i = 0; i < arraysize; i++)
    {
        cout<<"The Scores Are: "<<ptr[i];
    }
    delete[] ptr;
    ptr= nullptr;
}