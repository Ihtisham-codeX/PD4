#include<iostream>
void checkequality(int n1,int n2);
using namespace std;
main()
{
 	
	int n1,n2;
  	cout<<"ENTER THE FIRST NUMBER";
	cin>> n1;
	cout<< "ENTER THE SECOND NUMBER ";
	cin>> n2;
        checkequality(n1,n2);
}
 void checkequality(int n1,int n2)
{
	if(n1==n2)
          {
	    cout<<"TRUE";
	  }
        if(n1!=n2)
          cout<<"FALSE";
          
}