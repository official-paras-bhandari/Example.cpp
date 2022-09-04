#include <iostream>
using namespace std;
enum EDifficulty {Easy=1,Normal=55,Hard};
int main(){
    EDifficulty difficulty = Easy;

    if(difficulty == Easy)
    {
        cout << (Normal-Easy) << endl;
    }
    
    cout << "End of the program" << endl;
    return 0;
}