#include<iostream>
using namespace std;
int main()
{
//	Program to convert PKR into other currencies.
int choice;
float pkrAmount,converted;
cout<<"Currency converter\n";
cout<<"1. Convert to USD\n";
cout<<"2. Convert to Euro\n";
cout<<"3. Convert to Dirham\n";
cout<<"Enter your choice(1-3):";
cin>>choice;
cout<<"Enter amount in PKR:"<<endl;
cin>>pkrAmount;
switch(choice){
	case 1:
	converted=pkrAmount/280;
//	USD Rate
cout<<"Converted amount in USD= "<<converted<<endl;
break;
case 2:
	converted=pkrAmount/300;
//	Euro Rate
cout<<"Converted Amount in Euro= "<<converted<<endl;
break;
case 3:
	converted=pkrAmount/76;
//	Dirham Rate
cout<<"Converted Amount in Dirham= "<<converted<<endl;
break;
default:
	cout<<"Invalid Choice!"<<endl;
}
return 0;
}
