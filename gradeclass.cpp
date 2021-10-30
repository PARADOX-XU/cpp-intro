#include<iostream>
using namespace std;

int main(){
	int score1, score2;
	
	cout<<"Please enter 2 grades, separated by a space: ";
	cin>>score1>>score2;
	
	if(score1 < 65 && score2 < 65)
		cout<<"Student Failed:(";
	else if(score1>=95 && score2>=95)
		cout<<"Student Graduated with Honors:)";
	else
		cout<<"Student Graduated!";
	
	return 0;	
}
