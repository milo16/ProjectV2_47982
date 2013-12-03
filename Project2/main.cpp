/* 
 * File:   main.cpp
 * Author: Luis Pow Sang
 * December 2nd, 2013, 7:00 PM
 * Tic Tac Toe Game 
 */

//Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
const int COLUMNS=3;//declare variable for COLUMNS
void Initialization (char board[][COLUMNS],int);
void DisplayBoard (char board[][COLUMNS], int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int ROWS=3;
    char arry [ROWS][COLUMNS];
    char player='X';
    int rws=0;
    int clmns=0;
    
    Initialization (arry,ROWS);
    DisplayBoard (arry,ROWS);
    
    //inputs
    cout<<"Choose desired row, player "<<player<<": ";
    cin>>rws;

    cout<<"Choose desired column, player "<<player<<": ";
    cin>>clmns;
  
    
    return 0;
}
    
void DisplayBoard (char board[][COLUMNS], int r){
    for(int i=0;i<r;i++){
        for(int j=0;j<COLUMNS;j++){
            cout<<" | "<<board[i][j];
            }
        cout<<endl;
    }
}

void Initialization (char board[][COLUMNS],int r){
    for(int i=0;i<r;i++){
        for(int j=0;j<COLUMNS;j++){
            board [i][j]= 'n';
            
        }
    }
    
}