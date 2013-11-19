/* 
 * File:   main.cpp
 * Author: Luis Pow Sang
 * Created on November 18, 2013, 11:08 PM
 * Tic Tac Toe Game (I'm not sure yet about doing this game for my project #2)
 * Note: my project #1 is hard to expand to 250 lines, I'm trying to find another 
 * game for my project #2.
 */

//Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
void DisplayBoard(char array[][3], int size);

//Execution begins here
int main(int argc, char** argv) {
    
    
    return 0;
}

void DisplayBoard(char array[][3], int size)
{
	
	cout<<"::Tic Tac Toe::\n\n";

	for (int x = 0; x < size; x++)
	{
		for (int y = 0; y < size; y++)
		{
			cout<<array[x][y];
			cout<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}