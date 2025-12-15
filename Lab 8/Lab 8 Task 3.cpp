#include<iostream>
using namespace std;
int main()
{
//	Program to calculate area of Circle, Rectangle,or Triangle using switch.
int choice;
float area;
cout<<"Select a shape to calculate area:\n";
cout<<"1.Circle\n2.Rectangle\n3.Triangle\n";
cout<<"Enter your choice(1-3):"<<endl;
cin>>choice;
switch(choice){
case 1:{
float radius;
cout<<"Enter radius of the circle:"<<endl;
cin>>radius;
area=3.1416*radius*radius;
cout<<"Area of Circle = "<<area<<endl;
break;
}
case 2:{
float length,width;
cout<<"Enter the length and the width of the rectangle:"<<endl;
cin>>length>>width;
area=length*width;
cout<<"Area of Rectangle = "<<area<<endl;
break;		
}
case 3:{
float base,height;
cout<<"Enter the base and the height of the triangle:"<<endl;
cin>>base>>height;
area=0.5*base*height;
cout<<"Area of Triangle = "<<area<<endl;
break;	
}
default:
	cout<<"Invalid choice! Please select 1,2,or 83."<<endl;
}
return 0;
}










