#include <iostream>
using namespace std;
int main()
{
    const int ARRAY_SIZE =5;
    int tempArray[ARRAY_SIZE];
     for (int i = 0; i <=ARRAY_SIZE;i++)
     {
      tempArray[i]=i+1;
     }
     for (int i = 0; i <=ARRAY_SIZE; i++)
     {
        cout<<tempArray[i];
     }
     cout<<tempArray[6];
}