#include <iostream>
#include <string>
using namespace std;
int main()
{
	string username,password;
//	Predefined correct credentials.
string correctUsername="admin";
string correctPassword="12345";
//Input from user
cout<<"Enter username:"<<endl;
cin>>username;
cout<<"Enter password:"<<endl;
cin>>password;
//Check login credentials
if(username==correctUsername&&password==correctPassword){
	cout<<"Access Granted."<<endl;
}else if(username==correctUsername&&password!=correctPassword){
	cout<<"Wrong Password"<<endl;
}else{
	cout<<"User Not Found."<<endl;
}

return 0;

	
}
