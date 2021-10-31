#include <iostream>
using namespace std;

int main(){

	int number;	
  int i =1, j= 1;
	

	cout<<"Please enter a positive integer greater than 1: ";
	cin>>number;

	cout<<i<<endl<<j<<endl;

	for(int n = 0; n < number - 2 ; n++){
		int t = j;
		j = i;
		i = i + t;

		cout<<i<<endl;
	}

	return 0;
}
