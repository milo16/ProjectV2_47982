/* 
 * File:   main.cpp
 * Author: Luis Pow Sang
 * December 4rth, 2013
 * Tic Tac Toe Game 
 */

//Libraries
#include <iostream>
using namespace std;

//No Global Constants

//Function Prototypes
const int COLUMNS=3;//declare variable for COLUMNS
void Initialization (char board[][COLUMNS],int);
void DisplayBoard (char board[][COLUMNS], int);
bool Winner (char board[][COLUMNS], int, char);
bool Tie (char board[][COLUMNS], int);

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
    
    //If the spot is not available then displays a  message 
        if(arry [rws][clmns] != 'n'){
            cout<<"This spot is not available anymore, choose another one"<<endl;
        }
        else{
            arry [rws][clmns]=player;

            if (player=='X'){
                player='O';
            }
            else {
                player='X';
            }
        
        
    
    }
  
    
    return 0;
}

// Function determines when the game is a tie
bool Tie (char board[][COLUMNS], int r){
    for(int i=0;i<r;i++){
        for(int j=0;j<COLUMNS;j++){
            if(board [i][j]== 'n')
            {
                // if there is an empty space there is no tie
                return false;
                
            }
            
        }
    }
    
    // A tie because there isn't an empty space
    cout<<"It's a tie!!!!!"<<endl;
    return true;
}


 // Function determines the winner
bool Winner (char board[][COLUMNS], int r, char player)
{
    // horizontal win
    for (int i=0; i<r; i++)
    {
        if (board[i][0] == player &&
            board[i][1] == player &&
            board[i][2] == player)

            return true;
    }
    
    // vertical win
    for (int i=0; i<r; i++)
    {
        if (board[0][i] == player &&
            board[1][i] == player &&
            board[2][i] == player)
            
            return true;
    }
    
    // diagonal '/'
    if (board[2][0] == player &&
        board[1][1] == player &&
        board[0][2] == player)
        
        return true;
    
    // diagonal '\'
    if (board[0][0] == player &&
        board[1][1] == player &&
        board[2][2] == player)
        
        return true;
    
    // return false (no a winner)
    return false;
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