#include <iostream>

using namespace std;

string fullname(string FirstName, string LastName){
	return FirstName + " " + LastName;
}

int main(){

string namegreetings;

namegreetings = fullname("Reil","Tusoy");	
cout<<namegreetings;
	
	return 0;
}
