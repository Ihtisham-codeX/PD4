#include<iostream>
#include<windows.h>
void gotoxy(int x, int y);
void MovePlayer(int x, int y);
using namespace std;
main()
{ 
	int x,y;
	cout<<" Enter X and Y coordinates:";
	cin>> x >> y;
	MovePlayer(x,y);

}
void MovePlayer(int x, int y)
{
	while(true)
	{
 	gotoxy(x,y);
	cout<<"p";
        Sleep(100);
	gotoxy(x,y);
	cout<<" ";
        x=x+1;
	}
}
void gotoxy(int x, int y)
	{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);	
	}