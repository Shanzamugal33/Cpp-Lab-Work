#include <iostream>
using namespace std;
int main()
{
	char signal;
	cout<<"Enter the color of the signal (R,G,Y)"<<endl;
	cin>>signal;
	if(signal=='r'||signal=='R')
	{
		cout<<"Stop"<<endl;
	}
	if(signal=='g'||signal=='G')
	{
		cout<<"Go"<<endl;
	}
	if(signal=='y'||signal=='Y')
	{
	    cout<<"Slow Down"<<endl;
    }
    return 0;
}
