#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float weight, height, BMI;
	
	cout<<"Please enter weight in pounds: ";
	cin>>weight;
	
	cout<<"Please enter height in inches: ";
	cin>>height;
	
	weight = weight * 0.453592; 
	height = height * 0.0254;
	
	BMI = weight / (height * height);
	
	cout<<"BMI is: ";
	cout<<fixed<<setprecision(2)<<BMI<<endl;
	
	return 0;
}
