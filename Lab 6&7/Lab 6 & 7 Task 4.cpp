#include <iostream>
using namespace std;

//	Grade Calculation.
char calculateGrade(int marks)
{
if (marks>=90){
	return'A';
}else if (marks>=80){
	return'B';
}else if (marks>=70){
	return'C';
}else if (marks>=60){
	return'D';
}else{
	return'F';
}
}
int main(){
	int subject1, subject2, subject3;
	int totalMarks;
	double percentage;
	char grade1, grade2, grade3;
//	Input marks for three subjectscout
cout<<"Enter marks for Subject 1:"<<endl;
cin>>subject1;
cout<<"Enter marks for Subject 2:"<<endl;
cin>>subject2;
cout<<"Enter marks for Subject 3:"<<endl;
cin>>subject3;
//Calculate grades for each subject
grade1=calculateGrade(subject1);
grade2=calculateGrade(subject2);
grade3=calculateGrade(subject3);
//Check if student has failed any subject.
if(grade1=='F'|| grade2=='F'|| grade3=='F'){
	cout<<"Failed"<<endl;
	return 0;
	
}
//Calculate total marks & percentage
totalMarks= subject1+subject2+subject3;
percentage= totalMarks/3;
//Display grades
cout<<"Grade for subject 1:"<<grade1<<endl;
cout<<"Grade for subject 2:"<<grade2<<endl;
cout<<"Grade for subject 3:"<<grade3<<endl;
//Display total marks and percentage
cout<<"Total Marks:"<<totalMarks<<endl;
cout<<"Percentage:"<<percentage<<"%"<<endl;
//Scholarship Eligibility
if(grade1=='A'&&grade2=='A'&&grade3=='A'&&totalMarks>=270){
	cout<<"Eligible for Merit Scholarship."<<endl;
	
}else if ((grade1=='A'||grade2=='B')&&((grade3=='A'||grade3=='B'))&&totalMarks>=240){
	cout<<"Eligible for Regular Scholarship."<<endl;	
}else{
cout<<"Not Eligible for any Scholarship."<<endl;	
}
return 0;
}






