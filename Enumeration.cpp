#include <iostream>
using namespace std;
enum EDifficulty {Easy=1,Normal,Hard};
int main(){
    EDifficulty difficulty = Easy;
    switch( difficulty){
        case Easy:
        cout <<"Easy"<<endl;
        break;
        case Normal:
        cout <<"Normal"<< endl;
        break;
        case Hard:
        cout <<"Hard";
        break;
        default:
        break;
    }
    cout << "End of the program" << endl;
    return 0;
}