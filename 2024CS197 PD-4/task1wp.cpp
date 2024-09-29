#include<iostream>
#include<windows.h>
using namespace std;
main()
{
	intx,y;
	system("cls");
	cout<<"Enter x and y cordinates";
	cin>> x >> y;
	MovePlayer(x,y)

	
}
void MovPlayer(int x, int y)
{
	gotoxy(x,y);
	cout<<"Test";
	Sleep(200);
	gotoxy(x,y);
	cout<<" ";
}
void gotoxy(int x, int y)
{
	COOR coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLES), coordinates);
}