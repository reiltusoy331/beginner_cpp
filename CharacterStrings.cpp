#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char x[5] = {'r','e','i','l','\0'};
	
	char s1[6] = "hello";
	char s2[6] = "world";
	char s3[10];
	strcpy(s3,s1);
	strcat(s1,s2);
	cout<<s3<<endl; 
	cout<<s1;
	
}


