// Character arrays and pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string.h>
using namespace std;

void print(char* C)// this can also be written as char C[] both are same
{
	int i = 0;
	//value can be changed using 
	//C[0] = 'A'; // this is allowed in normal character to pointer.
	// when we pass the argument to function as constant pointer line print(const char *C) this is not allowed.
	while (C[i] != '\0') //can be written as *(C+i)
	{
		cout << C[i]; //can be written as *(C+i)
		i++;
	}
	cout << "\n" ;

	// the above function can also be written as
	while (*C != '\0')
	{
		cout << *C; //this is similar to C[i]
		C++; //here we are incrementing the pointer which is a valid expression.
	}
	cout << "\n";
}

int main()
{
	char C[20];
	//This can also be written as 
	//char C[20] = "JOHN";// here null termination is implicit if we use string literal
	//char C[] = "JOHN"// here null termination is implicit if we use string literal
	//char C[5] = {'J', 'o', 'h', 'n', '\0'};
	//char *C = "Hello";// It will be stored as constant in compiler during runtime
	C[0] = 'J';
	C[1] = 'o';
	C[2] = 'h';
	C[3] = 'n';
	// This produces gibberish strings after n
	// The reason is it doesn't find the null string to terminate the printing
	cout << "Character array stored = " << C << endl;
	//If we add a null string it displays till the null string encountered.
	C[4] = '\0';
	cout << "Character array stored = " << C << endl;
	//we can also find the length of the string using strlen
	int len = strlen(C);
	cout << "Length of the string = " << len << endl;
	cout << "Size in bytes = " << sizeof(C) << endl;

	print(C);
}

