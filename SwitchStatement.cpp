#include <iostream>

using namespace std;

int main()
{
	char grade = 'A';
	
	switch(grade)
	{
		case 'A':
			cout<<"Amazing Job!"<<endl;
			break;
		
		case 'B':
			cout<<"Good Job!"<<endl;
			break;
			
		case 'C':
			cout<<"Fair Job!"<<endl;
			break;
		
		case 'D':
			cout<<"Try Harder!"<<endl;
			break;
		default:
			cout<<"Invalid input!"<<endl;
			break;
	}
	
	 cout<<"Your actually grade is "<<"\""<<grade<<"\""<<"."<<endl;
	 
	 
	return 0;
}
