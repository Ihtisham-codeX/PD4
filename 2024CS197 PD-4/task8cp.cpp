#include<iostream>
void owner(int holidays);
using namespace std;
main()
{
	 int holidays;
	 cout<<"HOLDAYS:";
	 cin>> holidays;
	 owner(holidays);
 
}
void owner(int holidays)
{
	 int norm, workdays, playtime, hour, minutes, difference;
	 norm=30000;
	 workdays=365-holidays;
	 playtime=(workdays*63)+(holidays*127);
 	 difference=norm-playtime;
 	 hour=difference/60;
 	 minutes=difference%60;
         if(difference>=0)
 { 
   	 cout<<"tom will slepp well";
   	 cout<< hour << "hours and " << minutes << "minutes less for play";
 }

 	 if(difference<0)
 {
  	 cout<<"tom will run away";
 }
 

 
}
