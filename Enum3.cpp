#include <iostream>
using namespace std;
enum EDifficulty {Easy=1,Normal=2,Hard=3};

   EDifficulty pointscollectef(int points)
   {
        if (points==1)
        {
            return EDifficulty::Easy;//returing Enumberation 
        }
        else if (points==2)
        {
            return EDifficulty::Normal;
        }
        else if (points==3){
            return EDifficulty::Hard;
        }
        else{
            return EDifficulty::Easy;
        }
   }      

