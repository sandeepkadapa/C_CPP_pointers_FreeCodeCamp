// Memory Leak.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Simple betting game
//"Jack Queen King" - computer shuffles these cards
//player has to guess the position of queen
//if he wins, he takes away 3*bets
//if he looses, he looses bet amount
//player has $100 initially
#include <iostream>
using namespace std;
int cash = 100;

void play(int bet)
{
	char c[3] = { 'J','Q','K' };
	cout << endl << "shuffling ...";
	srand(time(NULL)); //seeding random number generator
	int i;
	for (i = 0;i < 5;i++)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		int temp = c[x];
		c[x] = c[y];
		c[y] = temp; //swap characters at position x and y
	}
	int playerGuess;
	cout << "What's the position of queen - 1, 2, or 3 ? ";
	cin >> playerGuess;
	if (c[playerGuess - 1] == 'Q')
	{
		cash += 3 * bet;
		cout << "You win! Result = " << c[0]<< c[1]<< c[2] << " Total cash = " << cash << endl;
	}
	else 
	{
		cash -= bet;
		cout<<"You loose! Result = " << c[0] << c[1] << c[2] << " Total cash = " << cash << endl;
	}
}

void playdym(int bet)
{
	//char* c = (char*)malloc(3 * sizeof(char));
	char* c = new char[3];
	c[0] = 'J';c[1] = 'Q';c[2] = 'K';
	cout << endl << "shuffling ...";
	srand(time(NULL)); //seeding random number generator
	int i;
	for (i = 0;i < 5;i++)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		int temp = c[x];
		c[x] = c[y];
		c[y] = temp; //swap characters at position x and y
	}
	int playerGuess;
	cout << "What's the position of queen - 1, 2, or 3 ? ";
	cin >> playerGuess;
	if (c[playerGuess - 1] == 'Q')
	{
		cash += 3 * bet;
		cout << "You win! Result = " << c[0] << c[1] << c[2] << " Total cash = " << cash << endl;
	}
	else
	{
		cash -= bet;
		cout << "You loose! Result = " << c[0] << c[1] << c[2] << " Total cash = " << cash << endl;
	}
}

int main()
{
	cout << "Welcome to Virtual Casino" << endl;
	cout << "Total cash = " << cash << endl;
	int bet;
	while(cash>0)
	{
		cout << "What's your bet? $";
		cin >> bet;
		if (bet == 0 || bet > cash) break;
		//play(bet);
		playdym(bet);
		cout << "*************************************************" << endl;
	}
}