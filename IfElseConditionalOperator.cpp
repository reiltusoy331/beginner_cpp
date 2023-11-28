#include <iostream>

using namespace std;

int main(){
	
	int num1,num2,large_value;
	
	cout<<"Enter 1st number: ";
	cin>>num1;
	
	cout<<"Enter 2nd number: ";
	cin>>num2;
	
	
	if(num1 > num2){
		large_value = num1;
		cout<<large_value;
	}
	
	else{
		large_value = num2;	
		cout<<large_value;	
	}
	
	cout<<endl;
	cout<<endl;
	cout<<"Conditional operator section"<<endl;
	
	int number1,number2,larger_value;
		cout<<"Enter 1st number: ";
	cin>>number1;
	
	cout<<"Enter 2nd number: ";
	cin>>number2;
	
	
	larger_value = (number1 > number2)? number1 : number2;
	cout<<larger_value;
	
	
return 0;
	
}



