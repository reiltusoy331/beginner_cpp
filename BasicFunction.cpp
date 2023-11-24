#include<iostream>
using namespace std;

int sum;
int addition(int a, int b);

int main()
{
	int result = addition(2,3);
	cout<<result;
	return 0;	
}



int addition(int a, int b){
	sum = a+b;
	return sum;
	
}
