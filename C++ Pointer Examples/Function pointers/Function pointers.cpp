// Function pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int Add(int a, int b)
{
    return a + b;
}

void PrintHello()
{
    cout << "Hello its Wednesday my dudes" << endl;
}

void PrintCharHello(const char* name)
{
    cout << "Hello my ";
    for (int i = 0; i < strlen(name); i++)
    {
        cout << name[i];
    }
    cout << " dude!" << endl;

}
int main()
{
    int c;
    int (*p)(int, int); //pointer to function initialization
    //type of pointer function is important 
    p = &Add; // intializing the function address to pointer
    // p = Add; also returns address of the function to pointer
    c = (*p)(2, 3);//dereferencing and executing the function
    // c = p(2,3); also same as above statement
    cout << "output of pointer to function call = " << c << endl;

    void (*h)();
    h = PrintHello;
    h();

    void (*d)(const char*); // Need to change char* to const char* to give constant character as argument to function
    d = PrintCharHello;
    d("Wednesday");
}

