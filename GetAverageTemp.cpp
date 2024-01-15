#include <iostream>

using namespace std;

int main(){
	
	int temperatures[] = {15,20,25};
	
	int total_temperature,average_temperature;
	
	for(int temp: temperatures)
		total_temperature += temp;
	
	short count = sizeof(temperatures)/sizeof(int);
	average_temperature = total_temperature/count;
	
	cout<<"Total Average of the temperature is: "<<average_temperature;
	
return 0;
}
