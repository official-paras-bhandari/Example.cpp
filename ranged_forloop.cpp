#include <iostream>
using namespace std;
int main()
{
    int demo []={1,2,3};
    int i=0;
    for (int &temp: demo)//Referecning to 1 element,2nd element,3rd element
    {   //cout<<demo[i];
        cout << &temp << endl;
        i++;
    }
  
    for (int const &temp: demo)//Referecning to 1 element,2nd element,3rd element
    {   //cout<<demo[i];
        cout << temp << endl;
        i++;
    }
}