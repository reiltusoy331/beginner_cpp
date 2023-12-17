#include <iostream>

using namespace std;

int main(){
	
int num1,num2,result;
short opt;


	cout<<"Enter 1st number: ";
	cin>>num1;
	
	cout<<"Enter 2nd number: ";
	cin>>num2;
	
	cout<<"Avaialable Operations."<<endl;
	cout<<"1 - Addition"<<endl
	<<"2 - Subtraction"<<endl
	<<"3 - Multiplication"<<endl
	<<"4 - Division"<<endl;
	
	
	cout<<"Select an operator: ";
	
	cin>>opt;
	
	switch(opt){
		case 1:
			result = num1 + num2;
			cout<<result;
			break;
		
		case 2:
			result = num1 - num2;
			cout<<result;
			break;
			
		case 3:
			result = num1 * num2;
			cout<<result;
			break;
			
		case 4:
			result = num1 / num2;
			cout<<result;
			break;
			
		default:
			cout<<"Invalid choice!";			
		
	}

	
return 0;
	
}



