#include<iostream>
using  namespace std;

int main(){

double temperatures[] = {24.08, 23.45, 32.32};
double average_temp, total_temp,arraysize;


for(double temp:temperatures)
  total_temp+=temp;

arraysize = sizeof(temperatures)/sizeof(double);
average_temp =total_temp/arraysize;

cout<<"The total temp is: "<<total_temp<<endl;
cout<<"The average temp is: "<<average_temp;


    return 0;

}

