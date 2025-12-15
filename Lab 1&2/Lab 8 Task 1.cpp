#include<iostream>
using namespace std;
int main()
{
	double num1,num2,result;
	char op;
	cout<<"Enter first number: "<<endl;
	cin>>num1;
	cout<<"Enter an operator (+,-,*,/): "<<endl;
	cin>>op;
	cout<<"Enter second number: "<<endl;
	cin>>num2;
	switch (op) {
	case '+':
	result= num1+num2;
	cout<<"Result: "<<result<<endl;
	break;
	case'-':
	result=num1-num2;
	cout<<"Result: "<<result<<endl;
	break;
	case'*':
	result=num1*num2;
	cout<<"Result: "<<result<<endl;
	break;
	case'/':
	result=num1/num2;
	cout<<"Result: "<<result<<endl;
	break;	
	default:
	cout<<"Invalid operator! Please use +,-,*or/ only."<<endl;
	}
	return 0;
}
