// Pointers to pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    //Pointers to Pointers
    cout << "Pointers to pointers" << endl;
    int x = 5;
    int* p = &x;
    *p = 6;
    int** q = &p;
    int*** r = &q;
    //dereferencing p and getting value stored in x
    cout << "Value stored at address in p = " << *p << endl;
    //getting address of p
    cout << "Address of p = " << &p << endl;
    //dereferencing q and getting value stored in p
    cout << "Value stored at address in q = " << *q << endl;
    //double dereferencing q to get value stored in x
    cout << "Value stored at address in p = " << **q << endl;
    // double dereferncing r to get value in q
    cout << "Value stored at address in p = " << **r << endl;
    //triple dereferncing r to get value stored in x
    cout << "Value stored at address in p = " << ***r << endl;
    // using triple dereferencing r we can change value of a.
    ***r = 10;
    cout << "Value stored at address in p = " << *p << endl;
    // changing the value using dereferencing on pointer p and assigning to a using q pointer
    **q = *p + 2;
    cout << "Value stored at address in p = " << *p << endl;

}

