#include<iostream>

using namespace std;

int main(){
	
	string street,city,state;
	int zipcode;
	
	cout<<"Enter your street address: ";
	getline(cin, street);
	cout<<"Enter your city: ";
	getline(cin, city);
	cout<<"Enter your state: ";
	getline(cin, state);
	cout<<"Enter your zip code: ";
	cin>>zipcode;
	
	cout<<street<<endl
	<<city<<", "<<state<<", "<<zipcode;
	
	return 0;
}
