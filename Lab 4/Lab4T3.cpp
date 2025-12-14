#include <iostream>
using namespace std;
int main()
{
	float balance;
	bool isLoyal;
	cout<<"Enter Account Balance: $";
	cin>>balance;
	cout<<"Is the costumer is loyal? (1 for yes, 0 for no): ";
	cin>> isLoyal;
	string accountType = (balance<100) ? "Low Balance account" : (balance<=500) ? "Standard" : "Premium";
	string offerEligibility = (balance>200&&isLoyal) ? "eligible for Special Offer" : "not eligible for Special Offer";
	cout<<"Account Type:"<<accountType<<endl;
	cout<<"The costumer is "<<offerEligibility<<endl;
	
	return 0;
	
}
