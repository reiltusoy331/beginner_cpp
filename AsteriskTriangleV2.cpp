#include <iostream>

using namespace std;

int main(){
	
	int rows;
	cout<<"Rows: ";
	cin>>rows;
	
	for(int row=1;row<=rows;row++){
		for(int col=1;col<=row;col++)
			cout<<"*";
		cout<<endl;
	}
	
	return 0;
}
