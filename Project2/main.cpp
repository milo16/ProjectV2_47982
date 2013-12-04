/* 
 * File:   main.cpp
 * Author: Luis Pow Sang
 * December 3rd, 2013, 5:00 PM
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
bool Winner (char board[][COLUMNS], int);


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

//Function determines the winner horizontally, vertically, and diagonally
bool Winner (char board[][COLUMNS], int r){
    //player found
    char playerw=board[0][0];
    
    //player wins horizontally
    for(int i=0;i<r;i++){
        for(int j=0;j<COLUMNS;j++){
            if(board [i][j] =='n' && playerw != board [i][j]){
                break;
                
            }
            playerw=board [i][j];
            if (j==2){
                cout<<"The winner is player "<<playerw<<"!!!!"<<endl;
                return true;
                
            }
        }
        
    }
    
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