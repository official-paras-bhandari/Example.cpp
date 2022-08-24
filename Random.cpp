#include <iostream>
#include <cstdlib>  //required for rand(), srand()
#include <ctime>    //required for time()
using namespace std;

int main() {
    srand(time());     //randomizing results... (using time as an input)
    
    const int totalNumbersGenerated = 30;
    const int minRange = 1, maxRange = 20;

    cout<<"\nPrinting "<<totalNumbersGenerated<<" random integer numbers (from "<<minRange<<" to "<<maxRange<<"):\n";
    
    for(int i=1;i<=totalNumbersGenerated;i++){
        //generating random number in specified range (inclusive)
        cout<<1+((rand () % maxRange) + minRange - 1)<<" ";
    }
    
    cout<<endl;
    return 0;
}