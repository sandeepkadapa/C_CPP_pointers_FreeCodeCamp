// Pointer to pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    //Pointers to Pointers
    int x = 5;
    int* p = &x;
    *p = 6;
    int** q = &p;
    int*** r = &q;

    cout << "Value stored at address in p = " << *p << endl;
    cout << "Value stored at address in q = " << *q << endl;
    cout << "Value stored at address in r = " << *r << endl;



}
