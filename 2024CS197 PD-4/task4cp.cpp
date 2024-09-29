#include<iostream>
void challan(int speed );
using namespace std;
main()
{
  	int speed;
  	cout<<"Enter your speed";
  	cin>> speed;
  	challan(speed);

}
void challan(int speed )
{
  	if (speed>100)
  	{
  	 cout<<"Halt... YOU WILL BE CHALLENGED!!!";
    
   	}
  	if (speed<=100)
   	{
     	cout<<"Perfect! You’re going good.";
  	}
}