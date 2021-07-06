// Arrays as function arguments.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//An array can be passed as an argument to a function
//In this function we are receiving array as an argument and size of array
int SumOfElements(int A[], int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += A[i]; //equal to *(A+i)
    }
    return sum;
}

//In this function we are only array as an argument
// both int A[] and int* A both are same in this case as the 
// arrays in functions are passed as call by reference
//int SumOfElements(int A[])
int SumOfElements(int * A) // int *A and A[] are same in case of arrays
{
    int i, sum = 0;
    //
    cout << "SOE function - Size of A = " << sizeof(A) << ", Size of A[0] = " << sizeof(A[0]) << endl;
    int size = sizeof(A) / sizeof(A[0]);
    for (i = 0; i < size; i++)
    {
        sum += A[i]; //equal to *(A+i)
    }
    return sum;
}

void Double(int * A, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        //here we are dereferencing array elements and doubling their value
        //after doubling we are assinging the new values to same elements of array
        A[i] = 2 * A[i]; 
    }
    
}
int main()
{
    int A[] = { 1,2,3,4,5 };
    int size = sizeof(A) / sizeof(A[0]);
    cout << "Main function - Size of A = " << sizeof(A) << ", Size of A[0] = " << sizeof(A[0]) << endl;
    //In this below function call we calling SumOfElements function with 2 arguments
    // A can also be passes as &A[0], we cannot increment or decrement A like pointers
    int total = SumOfElements(A, size); // the works perfectly and gives 15 as the output
    cout << "Sum of elements in Array from function with 2 arguments = " << total << "\n" << endl;

    // Here we are using function with only 1 argument
    total = SumOfElements(A); // gives 1 as output
    cout << "Sum of elements in array from function with 1 argument = " << total << "\n" << endl;

    //doubling the values of array using pointer to integer
    Double(A, size);
    for (int i = 0; i < size; i++)
    {
        cout << "Value at index  " <<i << " in the array = " << A[i] << endl;
    }
}