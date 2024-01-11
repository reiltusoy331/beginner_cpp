#include <iostream>

using namespace std;

int comparison(int num1, int num2){
	if(num1 > num2){
		return num1;
	}
	else{
		return num2;
	}
	
}

int main(){
	
	int max = comparison(4,3);
	cout<< max;
	
	return 0;
}


