#include<iostream>
using namespace std;

float Addition(float,float);
float Subtraction(float,float);
float Multiplication(float,float);
float Division(float,float);
float Modulos(float,float);

int main()
{
	float add, sub, mul, div, mod;
	float number1, number2;
	int select;
	
	cout<<"Enter the 1st value: ";
	cin>>number1;
	
	cout<<"Enter the 2nd value: ";
	cin>>number2;
	cout<<endl<<endl;
	
	cout<<"Select what mathematical operation to perform"<<endl;	
	cout<<"Press 1 for Addition"<<endl;
	cout<<"Press 2 for Subtraction"<<endl;
	cout<<"Press 3 for Multiplication"<<endl;
	cout<<"Press 4 for Division"<<endl;
	cout<<"Press 5 for Modulos"<<endl;
	cout<<"Enter operation: ";
	cin>>select;
	
	cout<<endl;
	
	switch(select)
	{
		case 1: 
		add=Addition(number1,number2);
		cout<<"The sum is "<<add;
		break;
		
		case 2: 
		sub=Subtraction(number1,number2);
		cout<<"The answer is "<<sub;
		break;
		
		
		case 3: 
		mul=Multiplication(number1,number2);
		cout<<"The answer is "<<mul;
		break;
		
		case 4: 
		div=Division(number1,number2);
		cout<<"The answer is "<<div;
		break;
		
		case 5: 
		mod=Modulos(number1,number2);
		cout<<"The answer is "<<mod;
		break;
		
		default:
		cout<<"Invalid choice! "<<endl;
		break;
		
	}

	
	return 0;
}


float Addition(float number1, float number2)
{
	return number1 + number2;
}

float Subtraction(float number1, float number2)
{
	return number1 - number2;
}

float Multiplication(float number1, float number2)
{
	return number1 * number2;
}


float Division(float number1, float number2)
{
	return number1 / number2;
}

float Modulos(float number1, float number2)
{
	return 1;
}

