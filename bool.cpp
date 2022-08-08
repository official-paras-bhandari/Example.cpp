#include <iostream>
using namespace std;
bool isEqual(int x, int y)
{
    return(x==y);
}
int main(){
    int character_1powerlevel{900},character_2powerlevel{900};
    bool isMatched=isEqual(character_1powerlevel, character_2powerlevel);
    if(isMatched)
    {
        cout<<"The Match is tie";
    }
}