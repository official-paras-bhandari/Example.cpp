#include <iostream>
using namespace std;

enum EDifficulty{ Easy, Normal, Hard};
enum class ETerrainDifficulty :int{ Easy, Normal, Hard};
int main(){
    EDifficulty gameDifficulty = EDifficulty::Normal;
    ETerrainDifficulty terriandifficulty = ETerrainDifficulty::Normal;
    if(!gameDifficulty==Normal){
        cout <<Hard << endl;
    }
    else{
        cout<<Normal << endl;
    }
    gameDifficulty = (EDifficulty)2;//casting 2 to EDifficulty//And Setting Hard 
    terriandifficulty = (ETerrainDifficulty)1;
    if(gameDifficulty==EDifficulty::Hard)
        cout<<"Hard" << endl;
    
    cout<<gameDifficulty<<endl; 
    cout<<(int)terriandifficulty<<endl;//Implicit(indirectly) type conversion operates automatically when the compatible data type is found.
                                        //Explicit(directly) type conversion requires a type casting operator.
    // int x =2;                        //he purpose of this feature (scoped enumerations) is precisely as you have found: 
                                        //It's to prevent implicit conversions. Implicit conversions can lead to namespace collisions and undesirable side-effects
    // x = (int)ETerrainDifficulty::Normal;
    // cout<< x;
return 0;
}