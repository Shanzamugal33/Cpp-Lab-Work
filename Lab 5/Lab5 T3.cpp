#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter a number: "<<endl;
	cin>>a>>b>>c;
	if(a>=b&&a>=c)
	{
	cout<<"The greatest number is: "<<a<<endl;
	}
	if(b>=a&&b>=c)
	{
		cout<<"The greatest number is: "<<b<<endl;
	}
	if(c>=a&&c>=b)
	{
		cout<<"The greatest number is: "<<c<<endl;
	}
    return 0;
	
}
