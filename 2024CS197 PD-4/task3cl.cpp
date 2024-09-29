#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void PrintMaze();
void MovePlayer(int x, int y);

main()
{	
	int x,y;
	x=6;
	y=6;
	cin>> x >> y;
	system("cls");
	PrintMaze();	
	MovePlayer(x,y);
	
}
  void PrintMaze()
{	// x26 y7
	cout<<"############################"<<endl;
        cout<<"#                          #"<<endl;
	cout<<"#                          #"<<endl;
	cout<<"#                          #"<<endl;
        cout<<"#                          #"<<endl;
        cout<<"#                          #"<<endl;
        cout<<"#                          #"<<endl;
        cout<<"#                          #"<<endl;
	cout<<"############################"<<endl;

}
 void MovePlayer(int x, int y)
{	
	 
	  
	  gotoxy (x, y);
	  cout<<"x";
	  Sleep(200);
	  gotoxy (x, y);
          cout<<" ";
	 
	 
}

 void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}