#include<iostream>
#include<iomanip>

using namespace std;

int main(){
double fahrenheit; 	
double celsius; 

cout<<"Enter temperature in fahrenheit: ";
cin>>fahrenheit;

celsius = (fahrenheit-32) * (5.0/9.0);

cout<<"The equivalent value of fahrenheit to celsius is ";
cout<<fixed<<setprecision(2)<<celsius<<endl;


return 0;
}
