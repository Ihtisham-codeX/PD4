#include<iostream>
void flower(int amount1, int amount2, int amount3);
using namespace std;
main()
{ 	float total;
  	float amount1,amount2,amount3;
  	cout<<"RED ROSES:";
  	cin>> amount1;
  	cout<<"WHITE ROSES:";
  	cin>> amount2;
  	cout<<"TULIPS:";
  	cin>> amount3;
  	flower(amount1,amount2,amount3);

 }
   
void flower(int amount1, int amount2, int amount3)
  { 	float total,discount,discounted;
    	float price1;
    	price1=amount1*2;
    	float price2;
    	price2=amount2*4.1;
    	float price3;
    	price3=amount3*2.5;
    	total=price1+price2+price3;
    	discount=total*0.2;
    	discounted=total-discount;
    	cout << "Original price " << total;
       if(total>=200)
       {
    	cout<<"Price after discount"<< discounted;  
       }
}
