#include<iostream>

using namespace std;

void inqure()
{
    cout << "End";
    inqure();
}
int main(){
    inqure();
}