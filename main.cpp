#include <iostream>
#include "tictactoe.h"
using namespace std;
#include <string>
int main()
{

string array[10] = { "0","1","2","3","4","5","6","7","8","9"};

cout << array[1] << array[2] << array[3] << endl;
cout << array[4] << array[5] << array[6] << endl;
cout << array[7]<< array[8] << array[9] << endl;

int num;
int flag = 0;
string string1 = "x";
string strng2 = "o";


while (flag =0)
cout << "player one please enter the number where you would like to place an x" << endl;
cin >> array[num];

if (array[num].compare(string1)!=0)
array[num] = string1;
system("pause");

}

