
#include <iostream>
#include "tictactoe.h"
using namespace std;
#include <string>

int num;
int flag = 0;
string string1 = "x";
string string2 = "o";
string array[10] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };


void restart()
{

	string array[9] = { "0", "1", "2", "3", "4", "5", "6", "7", "8"};


};

void print()
{
	cout << array[1] << array[2] << array[3] << endl;
	cout << array[4] << array[5] << array[6] << endl;
	cout << array[7] << array[8] << array[9] << endl;
};

bool move1()
{


	cout << "player one please enter the number where you would like to place an x" << endl;
	cin >> array[num];

	if (array[num].compare(string1) != 0 && array[num].compare(string2) != 0)
	{
		array[num] = string1;

		return true;
	}
	else if (array[num].compare(string1) == 0 || array[num].compare(string2) == 0)
	{
		return false;
	}
		
	system("pause");

};

bool move2()
{


	cout << "player one please enter the number where you would like to place an x" << endl;
	cin >> array[num];

	if (array[num].compare(string1) != 0 && array[num].compare(string2) != 0)
	{
		array[num] = string2;

		return true;
	}
	else if (array[num].compare(string1) == 0 || array[num].compare(string2) == 0)
	{
		return false;
	}

	system("pause");

};