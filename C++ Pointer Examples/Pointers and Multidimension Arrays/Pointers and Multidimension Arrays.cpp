// Pointers and Multidimension Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void Func(int A[][2][2]) // this can be written as int *A[2][2] 
//apart from 1st dimension all other dimensions need to written in function arguments.
{
    
}
int main()
{
    int C[3][2][2] = { 
                       {{2,5},{7,9}}, 
                       {{3,4},{6,1}}, 
                       {{0,8},{11,13}} 
                     };
    cout << "The address of C, *C, C[0], &C[0][0] "<< C <<" " << *C << " " << C[0] << " " << &C[0][0] << endl;
    cout << *(C[0][0] + 1) << endl;
    Func(C);
}
