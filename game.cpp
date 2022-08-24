#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int guessMyNumber()
{   
    int guess{},secretNumbers{},checkRadom{},checkRadom1{};
    srand(static_cast<unsigned int>(time(nullptr)));
    secretNumbers = rand() % 50+1;
    cout << "Guess a My random number." << endl;
    cout <<secretNumbers << endl; 
    cout <<checkRadom << endl; 
    cout <<checkRadom1 << endl; 
    do
    {  
        cout << "Enter a numnbe between 1 to 50"<< endl;
        cin >> guess; 
         if(guess!=secretNumbers)
        {
            cout << "------Waring!!!! ----warning!!------"<< endl;
        }
        else if(guess > secretNumbers)
        {
            cout << "you have enter random number which is high: " << endl;
        }
        else if(guess < secretNumbers)
        {
            cout << "you have enter random number which is is low: " << endl;
        }
      
        else
        {
            cout << "you have sucessed it.";
        }
               
    }while(guess!=secretNumbers);
}
int main()
{   guessMyNumber();
    return 0;
}
