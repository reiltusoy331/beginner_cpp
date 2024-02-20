#include <iostream>

using namespace std;

int main(){
	
	bool isCitizen=true;
	bool hasBachelorDegree=false;
	short yearsOfExp=3;
	
	bool isEligible=isCitizen && (hasBachelorDegree || yearsOfExp >=2);
	
	cout<<boolalpha<<isEligible;
	
	
	return 0;
}
