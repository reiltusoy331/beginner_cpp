#include <iostream>
using namespace std;

int main(){
	
	int number,factorial=1, i;
	
	cout<<"### Simple Factorial Program ###"<<endl;
	cout<<endl;
	
	cout<<"Enter a positive number: ";
	cin>>number;
	
	
	i=1;
	while(i<=number)
	{
	 factorial*=i;	 
	 ++i;	
	}
	cout<<"The factorial of "<<number<<" is equal to "<<factorial<<endl;
	
	return 0;
}
