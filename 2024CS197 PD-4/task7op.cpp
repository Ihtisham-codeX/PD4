#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void PrintMaze();
void MovePlayer(int x, int y);
void playerpatrol();
main()
{	
	int x,y;
	cout<<"Enter the x and y cordinates";
	cin>> x >> y;
	system("cls");
	PrintMaze();	
	MovePlayer(x,y);
	
}
  void PrintMaze()
{	// x72 y11
	cout<<"#########################################################################"<<endl;
        cout<<"#                                                                       #"<<endl;
	cout<<"#                                                                       #"<<endl;
	cout<<"#                           					       #"<<endl;
        cout<<"#                          					       #"<<endl;
        cout<<"#                         					       #"<<endl;
        cout<<"#                      	  					       #"<<endl;
        cout<<"#                     	 					       #"<<endl;
        cout<<"#                      	 				               #"<<endl;
	cout<<"#                          					       #"<<endl;
	cout<<"#                          					       #"<<endl;
        cout<<"#                          					       #"<<endl;
        cout<<"#                          					       #"<<endl;
        cout<<"#                      						       #"<<endl;
        cout<<"#                     						       #"<<endl;
	cout<<"#                        					       #"<<endl;
        cout<<"#                      						       #"<<endl;
        cout<<"#                     						       #"<<endl;
	cout<<"#########################################################################"<<endl;

}
 void MovePlayer(int x, int y)
{	
	
	 while(x<=72 && y<=11)
	 {
	  // for upward movement
	  gotoxy (x, y);
	  cout<< "p";
	  Sleep(200);
	  gotoxy (x, y);
          cout<< "   ";
	  y=y+4;
	  //for downward movement
          gotoxy (x, y);
	  cout<< "p";
	  Sleep(200);
	  gotoxy (x, y);
          cout<< " ";
	  y=y-4;
	}
	
	 
}
 void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}