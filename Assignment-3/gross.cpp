// Ramesh’s basic salary is input through the keyboard. His
// dearness allowance is 40% of basic salary, and house rent
// allowance is 20% of basic salary. Write a program to calculate
// his gross salary.

// Gross Salary is, therefore: Basic Salary + HRA + Other Allowances.

#include<iostream>
using namespace std;

int main(){

    int basicSalary,grossSalary;
    float dl,hrl;
    cout<<endl<<"Enter the Salary of Ramesh: ";
    cin>>basicSalary;

    dl=basicSalary*0.40;
    hrl=basicSalary*0.20;

    grossSalary=(basicSalary+hrl+dl);
    cout<<endl<<"Gross salary of Ramesh is : "<<grossSalary;
    return 0;

}
