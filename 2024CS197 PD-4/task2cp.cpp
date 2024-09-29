#include<iostream>
#include<string>
using namespace std;
void negation(string in );

main()
{
  	string in;
  	cout<<"Enter 'true' or 'false'";
  	cin>> in;
  	negation(in);

}
void negation(string in )
{
        string out1,out2;
 	if (in== "false")
        {
        out1= "true";
        cout<< out1 ;
        }
        if (in== "true")
   	{
        out2= "false";
        cout<< out2 ;
        }
        if(in!= "true" && in!="false")
 	{
	cout<<"Invalid Entry";
	}
 
  
}