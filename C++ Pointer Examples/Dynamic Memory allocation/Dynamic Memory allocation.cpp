// Dynamic Memory allocation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void dyncalloc(int n)
{
    int* A = (int*)calloc(n , sizeof(int));
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }

}

void dynmalloc(int n)
{
    int* A = (int*)malloc(n* sizeof(int));
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the size of an array = ";
    cin >> n;
    //int A[n] will not work
    //we need to know the size of array, we cannot assign during runtime.
    int* A = (int *) malloc(n * sizeof(int));

    for (int i = 0;i < n;i++) 
    {
        //A[i] = i+1;
        *(A + i) = i + 1;
        
    }
    //free(A); if we run this code then we get garbage values
    //free(A);
    //A[3] = 5;
    // A = NULL; //after free adjust pointer to null
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }

    int* B = (int*)realloc(A, 2 * n * sizeof(int));
    cout << "previous block address in A = " << A << endl;
    cout << "new address block after realloc to B = " << B << endl;
    for (int i = 0; i < 2 * n; i++)
    {
        cout << B[i] << endl;
    }

    int* C = (int*)realloc(B, (n/2) * sizeof(int));
    cout << "previous block address in A = " << A << endl;
    cout << "new address block after realloc to B = " << B << endl;
    for (int i = 0; i < 2 * n; i++)
    {
        cout << C[i] << endl;
    }
    //int* D = (int*)realloc(NULL, 2 * sizeof(int)); this is equivalent to calling malloc
    //int* B = (int*)realloc(A, 0); this is equivalent to free(A)'

    dyncalloc(n);
    dynmalloc(n);
}