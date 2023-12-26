#include <iostream>

using namespace std;

int TwoIntegers(int num1, int num2){	
	if(num1>num2)
		cout<<num1<<cout<<" is greater than "<<num2<<endl;
	else
		cout<<num2<<cout<<" is greater than "<<num1<<endl;
}

int main(){
	
	TwoIntegers(11,5);

	
	
	
	return 0;
}
