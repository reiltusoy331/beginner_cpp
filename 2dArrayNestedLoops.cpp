#include<iostream>

using namespace std;

int main(){
	
	int numberGrid[3][2] ={
						{1,2},
						{3,4},
						{5,6}
	};
	
	//accessing value of the array
	//cout<<numberGrid[1][1];
	
	//accessing value of the array 2D array via for loop	
	//declare a datatype(int) value of the initialization variable
	for(int i=0;i<3;i++){
			for(int j=0;j<2;j++){
			cout<<numberGrid[i][j];
	}
	
	}
	
	
	return 0;
}
