#include <iostream>
using namespace std;
int main()
{
	int n;
//	Input from user

cout<<"Enter an integer:";
cin>>n;
//Check if number "n" is positive,negative,or zero.

if (n>0){
	cout<<"The number is positive."<<endl;
}else if(n<0){
	cout<<"The number is negative."<<endl;
}else{
	cout<<"The number is Zero."<<endl;
}

return 0;

}
