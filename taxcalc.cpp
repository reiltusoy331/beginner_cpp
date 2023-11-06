#include<iostream>

using namespace std;

int main(){

double TotalSales = 95000;
const double StateTax = .04;
const double CountyTax = .02;

double TotalStateTax = TotalSales * StateTax;
double TotalCountyTax = TotalSales * CountyTax;

cout<<"The state tax amount is $"<< TotalStateTax<<endl;
cout<<"The county tax amount is $"<< TotalCountyTax<<endl;



return 0;
}
