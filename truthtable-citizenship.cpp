#include <iostream>

using namespace std;

int main(){
	
	bool us_citizen = false;
	bool bachellor_degree = true;
	int work_exp = 12;
	bool job_requirement;
	
	job_requirement = us_citizen && (bachellor_degree || work_exp>=2;
	if (job_requirement == true){
		cout<<"You passed the job requirement!";
	}
	else{
		cout<<"You didn't passed the job requirement!";
	}
	
	
return 0;
}
