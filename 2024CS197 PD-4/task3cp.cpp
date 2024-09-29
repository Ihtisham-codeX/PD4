#include<iostream>
void pakistan(int ticket);
void ireland(int ticket);
void india(int ticket);
void england(int ticket);
void canada(int ticket);
using namespace std;
main()
{
 	float ticket,price;
 	string country;
 	cout<<"Enter the county's name";
 	cin>> country;
 	cout<<"Enter the ticket price";
 	cin>> ticket;
 	if (country== "pakistan")
 	  {
 	       pakistan(ticket);
 	  } 
        if (country== "ireland")
 	  {
 	       ireland(ticket);
 	  } 
	
	if (country== "india")
   	{
        india(ticket);
        } 

  	if (country== "england")
        {
        england(ticket);
   	} 

  	if (country== "canada")
  	{
        canada(ticket);
   	} 
}
   
void pakistan(int ticket)
  {
	float price,discount;
    	discount=ticket*0.05;
    	price=ticket-discount;
    
   	cout<< "Final ticket price after the discount is"<< price ;
  }
void ireland(int ticket)
  {
    	float price,discount;
    	discount=ticket*0.1;
    	price=ticket-discount;
    	cout<< "Final ticket price after the discount is"<< price ;
  }
void india(int ticket)
  {
    	float price,discount;
    	discount=ticket*0.2;
    	price=ticket-discount;
    	cout<< "Final ticket price after the discount is"<< price ;
  }
void england(int ticket)
  {
    	float price,discount;
    	discount=ticket*0.3;
    	price=ticket-discount;
    	cout<< "Final ticket price after the discount is"<< price ;
  }
void canada(int ticket)
  {
    	float price,discount;
    	discount=ticket*0.45;
    	price=ticket-discount;
    	cout<< "Final ticket price after the discount is"<< price ;
  }

