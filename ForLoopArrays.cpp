#include <iostream>

using namespace std;

int main(){
	
	int numbers[100];
	
	for(int i=0; i<100;i++){
		
		numbers[i] = i + 1;
	}
	
	cout<<"These are the values in the array."<<endl<<endl;
	//Print 10 numbers per row
	for(int j=0;j<100;j++){
	
		if(numbers[j]<10)
		{
		cout<<"0"<<numbers[j]<<" ";
		}		
		else{ 
		cout<<numbers[j]<<" ";
		}
				
		if(numbers[j]%10==0)  {
		cout<<endl;		
		}
		continue;		
	}
	
	return 0;
}
