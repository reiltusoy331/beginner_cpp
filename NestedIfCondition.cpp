#include<iostream>

using namespace std;

int main(){
	
	int number;
	
	cout<<"Enter an Integer value: ";
	cin>>number;
	
	if(number > 0){
		cout<<"The number is greater than 0.";
	}
	
	else if(number < 0){
			cout<<"The number is less than 0.";
	}
	
	else{
		cout<<"You entered 0.";
	}
	
	return 0;
}
