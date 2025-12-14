#include <iostream>
using namespace std;
int main()
{
	int age;
	double income;
//	Take input
cout<<"Enter your age:"<<endl;
cin>>age;
cout<<"Enter your annual income:"<<endl;
cin>>income;
//Checking Eligibility
if(age>=18){
	if(income>=30000){
		cout<<"Congratulations! You are eligible for a loan."<<endl;
	} else{
		cout<<"You meet the age requirement but you are not eligible for the loan because your income is below $30000."<<endl;
	}
}else {
	cout<<"You are not eligible for loan because you are under 18 years of age."<<endl;
}
return 0;
}
