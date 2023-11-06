#include<iostream>

using namespace std;

int main(){
	int num1, num2;
	
	cout<<"Enter 1st number: ";	
	cin>>num1;
	cout<<"Enter 2nd number: ";	
	cin>>num2;
	if(num1 >0 && num2 >0 ){
		cout<<"both numbers are greater than 0"<<endl;
	}
	else{
		cout<<"either of the numbers are greater than 0"<<endl;
	}
	
	
	return 0;
}
