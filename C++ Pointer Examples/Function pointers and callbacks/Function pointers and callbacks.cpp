// Function pointers and callbacks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdlib.h>
using namespace std;

void A()
{
    cout << "Hello!" << endl;
}

void B(void (*funcptr)())//function pointer as argument
{
    funcptr();//callback function that pointer points to
}

void BubbleSort(int* A, int n)
{
    int i, j, temp;
    for (i = 0;i < n;i++)
    {
        for (j = 0;j < n - 1;j++)
        {
            if (A[j] > A[j + 1]) //compare A[j] with A[j+1] and swap if needed
                //this logic gives increasing order
                //if you want decreasing order use < condition in if statement
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int compare(int a, int b)
{
    if (a > b) return -1;
    else return 1;
}
//callback function should compare 2 integers, should return 1 if first element has higher rank
// 0 if elements are equal and -1 if second element has higher rank
void BubbleSortptr(int* A, int n, int (*compare)(int, int))
{
    int i, j, temp;
    for (i = 0;i < n;i++)
    {
        for (j = 0;j < n - 1;j++)
        {
            if (compare(A[j],A[j+1])>0) //compare A[j] with A[j+1] and swap if needed
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int absolute_compare(int a, int b)
{
    if (abs(a) > abs(b)) return 1;
    else return -1;
}

int compareqsort(const void* a, const void* b)
{
    int A = *((int *)a);
    int B = *((int*)b);
    return A - B;
    //B-A to decreasing order
    //abs(A)-abs(b) increasing order of absolute values
}

int main()
{
    void (*ptr)() = A;
    B(ptr);
    //the above two statements can be written as
    //B(A); // A is a callback function

    int i, arr[] = { 3,2,1,5,6,4 };
    BubbleSort(arr, 6);
    for (i = 0;i < 6;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    BubbleSortptr(arr, 6, compare);
    for (i = 0;i < 6;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int arrb[] = { -31, 22, -1, 50, -6, 4 };//=>{-1, 4, -6, 22, -31, 50}

    BubbleSortptr(arrb, 6, absolute_compare);
    for (i = 0;i < 6;i++)
    {
        cout << arrb[i] << " ";
    }
    cout << endl;

    qsort(arrb, 6, sizeof(int), compareqsort);
    for (i = 0;i < 6;i++)
    {
        cout << arrb[i] << " ";
    }
    cout << endl;
}
