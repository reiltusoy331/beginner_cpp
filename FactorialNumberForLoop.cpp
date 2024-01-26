 #include <iostream>

using namespace std;

int main(){
	
	int number;
	cout<<"Enter a positive number: ";
	cin>>number;
	
	if (number <0){
		cout<<"Error! Number is not a positive.";
	}
	else{
		int factorial = 1;
	for(int i=1; i<=number;i++){		
		factorial = factorial * i;
		cout<<i<<" x "<<factorial<<endl;
	}
	cout<<"The factorial of "<<number<<": "<<factorial<<endl;	
}
	
	
		
	
	
	return 0;
}
