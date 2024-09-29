#include<iostream>
void covid(int people, int tp);
using namespace std;
main()
 { 
   	int people, tp;
  	cout<<"Number of people in household ";
  	cin >> people;
   	cout<<"Number of rolls of tp";
   	cin >> tp ;
   	covid(people,tp); 
  	
 
 }
   
void covid(int people, int tp)
  { 	int days,tissue;
        tissue=tp*500;
        days=tissue/(people*57);
        if(days>=14)
        {
        cout<<"your TP will last" << days << " days,";
        cout<<"no need to panic";
        }
        if(days<14)
        {
        cout<<"your TP will last" << days << " days,";
        cout<<"go buy more!!";
        }
           	
}
