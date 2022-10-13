// TOH stand for Tower Of Honoi

// TOH is a famous recursive problem in computer science which is based on three pegs and the set of disk of different size.
// Each disk has a hole in centre, so that it can be stacked on any peg.
// Let A, B, C be the three pegs. At the beginning of the game, the disks are stacked on peg A in such a way that the largest size disk is on the button and smallest sized disk on top.
// The problem is to move disk from peg A to peg C, using peg B as auxiliary peg. So, peg A is a source peg & peg C is destination peg.

// C++ recursive function to
// solve tower of hanoi puzzle

#include <iostream>
#include <stdlib.h>
using namespace std;
int total = 0;
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << endl;
        total++;
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
    total++;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

// Driver code
int main()
{
    // time complexity 2^n

    int n; // Number of disks

    // Taking input
    cout << "Enter the no. of discs: ";
    cin >> n;                       // Enter the smaller number <=25 otherwise it will take lots of line to execute

    // calling function
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
    cout << "Total no of iteration: " << total << endl;
    return 0;
}