#include<iostream>

using namespace std;

int main()

{

	int quarters, dimes, nickels, pennies, dollars, cents, total;
  
  
	cout<<"Please enter the number of coins:"<<endl;

	cout<<"# of quarters: "; 
	cin >> quarters;

	cout<<"# of dimes: "; 
	cin >> dimes;
  
	cout<<"# of nickels: "; 
	cin >> nickels;

	cout<<"# of pennies: "; 
	cin >> pennies;


	total = (quarters * 25) + (dimes * 10) + (nickels * 5) + (pennies * 1);
	
  dollars = total / 100;
  cents = total % 100;
    
	cout<< "The total is "<<dollars<<" dollars and "<<cents<<" cents";

	

	return 0;

}
