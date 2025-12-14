#include <iostream>
using namespace std;
int main()
{
	int accBalance;
	int wdAmount;
	cout<<"Enter the account balance:"<<endl;
	cin>>accBalance;
	cout<<"Enter the withdrawal amount:"<<endl;
	cin>>wdAmount;
	if(wdAmount<=accBalance)
	{
		cout<<"remaining balance:"<<accBalance-wdAmount<<endl;
	}
	else
	{
	cout<<"Insufficient balance"<<endl;
	}
	return 0;
}
