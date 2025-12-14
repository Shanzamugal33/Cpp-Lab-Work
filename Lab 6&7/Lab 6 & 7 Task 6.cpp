#include <iostream>
#include<string>
using namespace std;
int main()
{
string username,password,role;
//Input username  & password
cout<<"Enter username:"<<endl;
cin>>username;
cout<<"Enter password:"<<endl;
cin>>password;
//Authentication
if(username=="admin"&& password=="password123"){
	cout<<"Authentication successful!"<<endl;
//	Input role after successful login
cout<<"Enter your role: "<<endl;
cin>>role;
//Role-based access
if(role=="Admin"){
	cout<<"Full Access"<<endl;
}else if (role=="Guest"){
	cout<<"Limited Access"<<endl;
}else{
	cout<<"No Access"<<endl;
}	
}else {
	cout<<"Authentication Failed.Access Denied"<<endl;
}
return 0;
}
