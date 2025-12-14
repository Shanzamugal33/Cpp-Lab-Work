#include <iostream>
using namespace std;
int main()
{
	int temp;
//	Input from User
cout<<"Enter the temperature in Celsius."<<endl;
cin>>temp;
//Suggestions based on temperature.
if(temp>=40){
	cout<<"Stay indoor because it is extremely hot & could be dangerous to health."<<endl;
	
}else if (temp>=30&&temp<=39){
	cout<<"Drink plenty of water to stay hydrated in the hot weather."<<endl;
	
}else if (temp>=20&&temp<=29){
	cout<<"The weather is pleasant and suitable for outdoor activities."<<endl;
	
} else{
//	The temperature below 20
	cout<<"Wear warm clothes to stay comfortable in the cooler weather."<<endl;
	
}

return 0;

}
