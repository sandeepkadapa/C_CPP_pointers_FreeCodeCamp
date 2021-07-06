// Pointers as function argument.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void Increment(int a) 
{
    a = a + 1;
    cout << "Address of a in Increment function using call by value method= " << &a << endl;
    cout << "Value of a in Increment function = " << a << "\n" << endl;

}

void Increment(int* p)
{
    *p = *p + 1;
    cout << "Address of a in Increment function using call by reference method = " << p << endl;
    cout << "Value of a in Increment function = " << *p << "\n" << endl;
}

int main()
{
    int a;
    a = 10;
    // this is call by value where we are passing the value of one argument to another.
    Increment(a);
    cout << "Address of a in main function = " << &a << endl;
    cout << "Value of a in main function after calling Increment function using call by value method = " << a << "\n" << endl;
    // since from this Albert not able to achieve what he wants this can be achieved using
    //call by reference.

    //Here we are passing the address of a which is given to pointer to integer in Increment function.
    //we derefence the pointer and increase the value present in the address of the variable pointer stored.
    Increment(&a);
    cout << "Value of a in main function after calling Increment function using call by reference method = " << a << "\n" << endl;
}


