#include <iostream>
using namespace std;

int main(){
	int a = 1;
	int b = 2;
	int temp = 0;
	
	cout << "The initial values before switching"<<endl;
	cout <<"a = "<<a<<endl;
	cout <<"b = "<<b<<endl;
	
	//switching values
	 temp = a; // c = 1 , a = 1, b =2
	 a = b; // c = 1, a = 2 , b = 2
	 b = temp; // c= 1, a = 2, b = 1
	 
	cout<<endl;
	
	cout << "The new values after switching"<<endl;
	cout <<"a = "<<a<<endl;
	cout <<"b = "<<b<<endl;
	
		
	return 0;
}
