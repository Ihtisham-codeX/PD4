#include<iostream>
void bonus(int p1 , int p2);
using namespace std;
main()
 { 
   	int p1,p2;
   	cout<<"Enter your position ";
   	cin >> p1;
   	cout<<"Enter your friends position";
   	cin >> p2 ;
   	bonus(p1,p2); 
  	
 
 }
   
void bonus(int p1 , int p2)
  { 	int diff;
        diff=p2-p1;
        if(diff<=6)
        {
          cout<<"TRUE";
        }
        if(diff>6)
        {
        cout<<"FALSE";
        }
           	
}
