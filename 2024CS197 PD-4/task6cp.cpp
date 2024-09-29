#include<iostream>
void duration(float h,float m );
using namespace std;
main()
{
  	float h,m;
        cout<<"Enter time in hours";
  	cin>> h;
  	cout<<"Enter time in hours";
  	cin>> h;
  	duration(h,m);

}
void duration(float m, float h )
{
  	float hours;
  	hours=h*60;
   
  	if (m<hours)
  	{
  	   cout<< h;
  	}
  	if (m>hours)
  	{
  	   cout<< m;
   	}
  	if (m==hours)
  	{
  	   cout<< "same";
  	}
	
}