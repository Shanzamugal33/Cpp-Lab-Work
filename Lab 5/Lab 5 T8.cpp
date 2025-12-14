#include <iostream>
using namespace std;
int main(){
	
	int marks ;
	cout << "Enter your marks out of 100 :" << endl;
	cin>>marks;
	
	    if ( marks>=90){
		cout << "A+" << endl; }
		
	    if (marks >=80 && marks <90){
			cout << "A" << endl;
		}	
		
		if ( marks>=70 && marks<80){
		cout << "B" << endl; }
		
		if ( marks>=60 && marks<70){
		cout << "C" << endl; }
		
		if ( marks<60){
		cout << "Fail" << endl; }
		
		return 0;
}
