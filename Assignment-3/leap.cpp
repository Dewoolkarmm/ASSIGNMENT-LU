// Any year is input through the keyboard. Write a program to
// determine whether the year is a leap year or not.
// (Hint: Use the % (modulus) operator)

#include<iostream>
using namespace std;
int main(){

    int year;

    cout<<endl<<"Enter the Year: ";
    cin>>year;
    
    if((year%4==0) && (year%100!=0) || year%400==0)
        cout<<endl<<"Year is Leap Year...";
    else
        cout<<endl<<"Year is Not Leap Year...";

    return 0;    
}