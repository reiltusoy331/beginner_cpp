#include <iostream>

using namespace std;

int main(){
	
	int grade1,grade2,grade3,grade4,grade5,grade6,grade7,grade8,average;
	
	cout<<"### GRADE AVERAGE PROGRAM ###"<<endl;
	cout<<"\n \n";
	
	cout<<"Enter 1st grade: ";
	cin>>grade1;
	
	cout<<"Enter 2nd grade: ";
	cin>>grade2;
	
	cout<<"Enter 3rd grade: ";
	cin>>grade3;
	
	cout<<"Enter 4th grade: ";
	cin>>grade4;
	
	cout<<"Enter 5th grade: ";
	cin>>grade5;
	
	cout<<"Enter 6th grade: ";
	cin>>grade6;
	
	cout<<"Enter 7th grade: ";
	cin>>grade7;
	
	cout<<"Enter 8th grade: ";
	cin>>grade8;
	
	average = (grade1+grade2+grade3+grade4+grade5+grade6+grade7+grade8) / 8;
	
	cout<<"The total average is: "<<average<<endl<<endl;
	
	
	if (average >= 98 || average == 100){
		cout<<"Remark: \"With Highest Honors\"";
		
	}
	else if (average >= 95 && average <= 97){
		cout<<"Remark: \"With High Honors\"";		
	}
	else if (average >= 90 && average <= 94){
		cout<<"Remark: \"With Honors\"";		
	}
	else if (average >= 75 && average <= 89){
		cout<<"Remark: \"Passed!\"";		
	}
	else if (average <= 74){
		cout<<"Remark: \"Failed!\" :(";		
	}
	else {
		cout<<"Invalid Grade!";
	}
		
	
	return 0;
}
