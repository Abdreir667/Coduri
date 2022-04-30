#include "stdafx.h"


#include <iostream>
#include <string>
#include <fstream>


using namespace std;

//Global Variables
const int ROWS = 12;
const int COLS = 30;
const int BOARD_ROWS(10);
const int BOARD_COLS(28);
const char LIVE = 'X'; //life cells
const char DEAD = '.'; //dead cells
char NewBoard[ROWS][COLS];
char quit;

//functions
bool MakeArray(string filename, char board[][COLS]);
void GameBoard(char board[][COLS]);
void SwitchBoard (char board[][COLS]);
void NextState(char board[][COLS]);

int main()
{
	char board [ROWS][COLS];
	string filename; //Name of the file
	cout<<"Enter the filename: \n";
	cin>>filename;
	//cout<<endl;

	//call functions
	if (MakeArray(filename, board))
{
	cout << "File not found.\n\n";
	cin>>quit; //stops from quiting
	return 1;
}
	//start loop
	cout<<endl;
	for (int l = 0; l<10; l++)
	{
		NextState(board);
		GameBoard(board);
		SwitchBoard(board);
	}
	//end loop

	//stop terminal window from quitting after programs ends
	char q;
	cin >> q;

	return 0;
}


bool MakeArray(string filename, char board[][COLS])
{
	ifstream myfile;
	myfile.open (filename.c_str());
	if (!myfile) return true;

    for (int r=0; r<ROWS; r++)
	{
		for (int c=0; c<COLS; c++)
		{
			myfile>>board[r][c];
		}
	}
	myfile.close();

	return false;
}


void GameBoard (char board[][COLS])
{
//cout<<endl;
	for (int r=1; r<=ROWS-2; r++)
	{
		for (int c=1; c<=COLS-2; c++)
		{

			cout<<board[r][c];
		}
		cout<<endl;
	}
	cout<<endl;
}
void NextState (char board[][COLS])
{

	for (int r=0; r<ROWS; r++)
	{
		for (int c=0; c<COLS; c++)
		{

			int LiveCnt=0;
			if (board[r-1][c-1]==LIVE)
			{
				LiveCnt++;
			}
			if (board[r-1][c]==LIVE)
			{
				LiveCnt++;
			}
			if (board[r-1][c+1]==LIVE)
			{
				LiveCnt++;
			}
			if (board[r][c-1]==LIVE)
			{
				LiveCnt++;
			}

			if (board[r][c+1]==LIVE)
			{
				LiveCnt++;
			}
			if (board[r+1][c-1]==LIVE)
			{
				LiveCnt++;
			}
			if (board[r+1][c+1]==LIVE)
			{
				LiveCnt++;
			}
/*/
Rules:
1.	Any live cell with fewer than two live neighbours dies, as if caused by under-population.
2.	Any live cell with two or three live neighbours lives on to the next generation.
3.	Any live cell with more than three live neighbours dies, as if by overcrowding.
4.	Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction.
/*/

			NewBoard[r][c] = DEAD;

			if (board[r][c] == LIVE && LiveCnt < 2) //rule 1
			{

				NewBoard[r][c]=DEAD;
			}
			else if (board[r][c]==LIVE && (LiveCnt==2 || LiveCnt==3))//rule 2
			{

				NewBoard[r][c]=LIVE;
			}
			else if (board[r][c]==LIVE && LiveCnt>3 ) //rule 3
			{

				NewBoard[r][c]=DEAD;
			}
			else if (board[r][c]==DEAD && LiveCnt==3) //rule 4
			{

				NewBoard[r][c]=LIVE;
			}
		}
	}



}
void SwitchBoard(char board[][COLS])
{

	for (int r=0; r<ROWS; r++)
	{
		for (int c=0; c<COLS; c++)
		{
			board[r][c]=NewBoard[r][c];
		}
	}

}