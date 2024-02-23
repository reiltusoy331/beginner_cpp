#include <iostream>

using namespace std;

int main(){
	
	short secretNumber = 31;
	short number;
	
	while(number!=secretNumber){
		cout<<"Guess the secret number: ";
		cin>>number;
		
		if(number < secretNumber)
			cout<<"Enter higher than "<<number<<endl;
		else if(number > secretNumber)
			cout<<"Enter lower than "<<number<<endl;
		else
			cout<<"You guessed correctly the secret number, which is "<<number<<endl;
	
	}
	
	
}
