#include<iostream>
using  namespace std;

int main(){
	
	int number, factorial=1;
	
	cout<<"Enter a positive number: ";
	cin>>number;
	
	for(int i; i<=number;i++){
		factorial*=i;
		cout<<factorial;
			
	}		
	
		
	
		
	return 0;
		
	
}
