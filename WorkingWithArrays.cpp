#include<iostream>

using namespace std;

/*
 Machine Problem: 
 Ask the user for 3 names. Store these names in an array and then print the first name.
*/
int main(){
	string names[3];	
	
	cout<<"Enter 1st name: ";
	cin>>names[0];
	
	cout<<"Enter 2nd name: ";
	cin>>names[1];
	
	cout<<"Enter 3rd name: ";
	cin>>names[2];

	cout<<names[0];

	
	return 0;
}
