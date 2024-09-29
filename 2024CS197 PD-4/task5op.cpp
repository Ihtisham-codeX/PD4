#include<iostream>
#include<windows.h>
void gotoxy(int x, int y);
using namespace std;       
main()
{

        gotoxy(30,10);
        cout<<" ###########  "<<endl;
        gotoxy(30,11);
	cout<<"      #       "<<endl;
        gotoxy(30,12);
	cout<<"      #       "<<endl;
        gotoxy(30,13);
	cout<<"      #       "<<endl;
        gotoxy(30,14);
	cout<<"      #       "<<endl;
        gotoxy(30,15);
	cout<<"      #       "<<endl;
        gotoxy(30,16);
	cout<<" ###########  "<<endl;

      
        gotoxy(40,10);
        cout<<"   #     #    "<<endl;
        gotoxy(40,11);
	cout<<"   #     #    "<<endl;
        gotoxy(40,12);
	cout<<"   #     #    "<<endl;
        gotoxy(40,13);
	cout<<"   #######    "<<endl;
        gotoxy(40,14);
	cout<<"   #     #    "<<endl;
        gotoxy(40,15);
	cout<<"   #     #    "<<endl;
        gotoxy(40,16);
	cout<<"   #     #    "<<endl;
        



        gotoxy(50,10);
        cout<<" ###########  "<<endl;
        gotoxy(50,11);
	cout<<"      #       "<<endl;
        gotoxy(50,12);
	cout<<"      #       "<<endl;
        gotoxy(50,13);
	cout<<"      #       "<<endl;
        gotoxy(50,14);
	cout<<"      #       "<<endl;
        gotoxy(50,15);
	cout<<"      #       "<<endl;
        gotoxy(50,16);
	cout<<"      #       "<<endl;

        gotoxy(60,10);
        cout<<" ###########  "<<endl;
        gotoxy(60,11);
	cout<<"      #       "<<endl;
        gotoxy(60,12);
	cout<<"      #       "<<endl;
        gotoxy(60,13);
	cout<<"      #        "<<endl;
        gotoxy(60,14);
	cout<<"      #       "<<endl;
        gotoxy(60,15);
	cout<<"      #       "<<endl;
        gotoxy(60,16);
	cout<<" ###########  "<<endl;

        

        gotoxy(70,10);
        cout<<"   #######    "<<endl;
        gotoxy(70,11);
	cout<<"   #          "<<endl;
        gotoxy(70,12);
	cout<<"   #          "<<endl;
        gotoxy(70,13);
	cout<<"   #######    "<<endl;
        gotoxy(70,14);
	cout<<"         #    "<<endl;
        gotoxy(70,15);
	cout<<"         #    "<<endl;
        gotoxy(70,16);
	cout<<"   #######    "<<endl;
        



        
        gotoxy(80,10);
        cout<<"   #     #    "<<endl;
        gotoxy(80,11);
	cout<<"   #     #    "<<endl;
        gotoxy(80,12);
	cout<<"   #     #    "<<endl;
        gotoxy(80,13);
	cout<<"   #######    "<<endl;
        gotoxy(80,14);
	cout<<"   #     #    "<<endl;
        gotoxy(80,15);
	cout<<"   #     #   "<<endl;
        gotoxy(80,16);
	cout<<"   #     #    "<<endl;

        

        gotoxy(90,10);
        cout<<"    #####     "<<endl;
        gotoxy(90,11);
	cout<<"   #     #    "<<endl;
        gotoxy(90,12);
	cout<<"   #     #    "<<endl;
        gotoxy(90,13);
	cout<<"   #######    "<<endl;
        gotoxy(90,14);
	cout<<"   #     #    "<<endl;
        gotoxy(90,15);
	cout<<"   #     #    "<<endl;
        gotoxy(90,16);
	cout<<"   #     #    "<<endl;

         

        gotoxy(101,10);
	cout<<"   ##     ##  "<<endl;
        gotoxy(102,11);
	cout<<"   # #   # #  "<<endl;
        gotoxy(103,12);
	cout<<"   # #  #  # "<<endl;
        gotoxy(104,13);
	cout<<"   #  ##   #  "<<endl;
        gotoxy(105,14);
	cout<<"   #       #  "<<endl;
        gotoxy(106,15);
	cout<<"   #       #  "<<endl;
        gotoxy(107,16);
	cout<<"   #       #  "<<endl; 


}


        

	void gotoxy(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;


    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

       

