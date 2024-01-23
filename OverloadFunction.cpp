#include <iostream>

using namespace std;

void greet(string name){
		cout<<"Hello"<<name;
	}
	
	void greet(string fname, string lname){
		cout<<"Hello "<<fname<<" "<<lname;
	}
	
int main(){
	
	greet("reil", "tusoy");
	
	
	return 0;
}
