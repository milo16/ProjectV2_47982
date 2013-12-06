/* 
 * File:   main.cpp
 * Author: Luis Pow Sang
 * December 5th, 2013
 * Tic Tac Toe Game 
 */

// Libraries
#include <iostream>
using namespace std;

// No Global Constants

// Function Prototypes
const int COLUMNS=3;//declare variable for COLUMNS
void Initialization (char board[][COLUMNS],int);
void DisplayBoard (char board[][COLUMNS], int);
bool Winner (char board[][COLUMNS], int, char);
bool Tie (char board[][COLUMNS], int);

// Execution begins here
int main(int argc, char** argv) {
    
    // Declare variables
    const int ROWS=3;
    char arry [ROWS][COLUMNS];
    char player='X';
    int rws=0;
    int clmns=0;
    
    // Calling initialization function
    Initialization (arry,ROWS);
    
    
    // Game continues on an infinite loop until won or tied.  
    // Once game is won or tied the loop exits with a break statement.
    while(true)
    {
        // Calling display board function
        DisplayBoard (arry,ROWS);
        
        // Inputs
        // Validation for inputs (0 to 2)
        do{
            
            // Input row number
            cout<<"Choose desired row, player "<<player<<": ";
            cin>>rws;
            
            // validation for rows
            // if rows numbers are less than 0 or greater than 2, the number is invalid
            // and displays message.
            if (rws<0||rws>2){
                cout<<"Rows #s should be from 0 to 2. Enter row # again."<<endl;
            }
        
        }while(rws<0||rws>2);// loops until player inputs the correct numbers
        
        do{
            
            // Input column number
            cout<<"Choose desired column, player "<<player<<": ";
            cin>>clmns;
            
            // validation for columns
            // if columns numbers are less than 0 or greater than 2, the number is invalid
            // and displays message.
            if (clmns<0||clmns>2){
                    cout<<"Columns #s should be from 0 to 2. Enter column # again."<<endl;
            }
        
        }while(clmns<0||clmns>2);// loops until player inputs the correct numbers
        
        
        // If the spot is not empty then displays the  message 
        if(arry [rws][clmns] != 'n'){
            cout<<"This spot is not available anymore, choose another one"<<endl;
        }
        else{
            
            // place move
            arry [rws][clmns]=player;
            
            // check for win
            if (Winner(arry, ROWS, player))
            { 
                // Print congratulations message
                cout << endl << "player " << player << " wins!!!" << endl << endl;
                
                // Display Final board
                DisplayBoard (arry,ROWS);
                
                // Exit
                cout << "Thanks for playing!" << endl << endl;
                break;
            }
            else if (Tie(arry, ROWS))
            {
                // Print Tie Message
                cout << "The game has ended in a tie." << endl;
                
                // Display Final board
                DisplayBoard (arry,ROWS);
                
                // Exit
                cout << "Thanks for playing!" << endl;
                break;
            }
            
           
            // Switch player
            // player X starts always the game
            if (player=='X'){
                player='O';
            }
            else {
                player='X';
            }
        
        }   
    
    
    }
    
    // Exit Stage Right
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


// Function draws the tic tac toe board
void DisplayBoard (char board[][COLUMNS], int r){
    for(int i=0;i<r;i++){
        for(int j=0;j<COLUMNS;j++){
            cout<<" | "<<board[i][j];
            }
        cout<<endl;
    }
}


// Function displays empty spaces of the board
// n = blank space or empty space
void Initialization (char board[][COLUMNS],int r){
    for(int i=0;i<r;i++){
        for(int j=0;j<COLUMNS;j++){
            board [i][j]= 'n';
            
        }
    }
    
}