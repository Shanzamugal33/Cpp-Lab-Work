#include <iostream>
using namespace std;
int main()
{
	const float Tax_rate=0.06; // sales tax costant
	float item1= 12.95,item2= 24.95,item3= 6.95,item4= 14.95,item5= 3.95;
	float total= item1+item2+item3+item4+item5;
	float salesTax=total*Tax_rate;
	cout<<"Price of item 1: $"<<item1<<endl;
	cout<<"Price of item 2: $"<<item2<<endl;
	cout<<"Price of item 3: $"<<item3<<endl;
	cout<<"Price of item 4: $"<<item4<<endl;
	cout<<"Price of item 5: $"<<item5<<endl;
	cout<<"Subtotal: $"<<total<<endl;
	cout<<"Sales Tax (6%): $"<<salesTax<<endl;
	cout<<"Total: $"<<total;
	return 0;
	
}

