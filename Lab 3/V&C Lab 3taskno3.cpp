#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	float testScore1=85.5,testScore2=90.75,testScore3=88.25;
	float average=(testScore1+testScore2+testScore3)/3;
	cout<<"The average of 85.5 , 90.75 and 88.25 ="<<fixed<<setprecision(2)<<average;
	
	return 0;
	
}
