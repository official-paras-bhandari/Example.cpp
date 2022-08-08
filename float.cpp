#include<iostream>
using namespace std;
int main()
{
    float tax,taxrate,price;
    taxrate =0.15;
    cout << "Enter a tax amount";
    cin >> price;
    tax = taxrate*price;
    cout << "The Tax is :"<< tax << endl;
}