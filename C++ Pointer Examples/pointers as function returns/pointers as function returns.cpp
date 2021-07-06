// pointers as function returns.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int Adda(int a, int b)//called function
{
    cout << "Addresses of a = " << &a << " b = " << &b << endl;
    int c = a + b;
    return c;
}

int Addb(int* a,int* b)
{
    // a and b are pointer to integers local to function Add
    cout << "pointer function Addresses of a = " << a << " b = " << b << endl;
    int c = (*a) + (*b);
    return c;
}
void PrintHelloWorld() 
{
    cout << "Hello World!" << endl;

}

int* Adda(int* a, int* b)//called function returns pointer to integer
{
    // a and b are pointer to integers local to function Add
    cout << "pointer function Addresses of a = " << a << " b = " << b << endl;
    int c = (*a) + (*b);
    return &c;
}

int* Addd(int* a, int* b)
{
    //int* c = (int*)malloc(sizeof(int));//using dynamic memory to store the output of Addd function
    int* c = (int*)calloc(1, sizeof(int));
    *c = (*a) + (*b);
    return c; //returns memory in heap segment.
}

int main()//calling function
{
    int x = 2, y = 3;
    cout << "Addresses of x = " << &x << " y = " << &y << endl;
    //call by value
    int z = Adda(x, y);//value of x and y in main is copied to a and b in Add function.
    cout << "sum = " << z << endl;
    //call by reference
    z = Addb(&x, &y);
    cout << "sum = " << z << endl;
    //call by reference
    
    int* ptr = Adda(&x, &y);
    PrintHelloWorld();
    cout << "sum = " << *ptr << endl;

    ptr = Addd(&x, &y);
    cout << "sum = " << *ptr << endl;
}