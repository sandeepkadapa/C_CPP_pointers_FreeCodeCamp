// Pointers and Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int A[] = { 2, 4, 5, 8, 1 };
    int i;
    //A++; //invalid
    //this throws an error.
    // operations such as A++ cannot be done on array whereas using pointers it can be done
    int* p = A;
    p++; //valid
    for (i = 0; i < 5; i++) 
    {
        cout << "Address of element A[" << i << "] = " << &A[i] << endl;
        cout << "Address of element A[" << i << "] = " << A+i << endl;
        cout << "Value of element A[" << i << "] = " << A[i] << endl;
        cout << "Value of element A[" << i << "] = " << *(A + i) <<"\n" << endl;
    }
}

