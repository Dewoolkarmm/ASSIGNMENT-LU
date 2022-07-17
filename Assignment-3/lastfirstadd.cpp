// If a four-digit number is input through the keyboard, write a
// program to obtain the sum of the first and last digit of this
// number.

#include<iostream>
using namespace std;

int main(){

int num, first, last,total;
cout<<endl<<"Enter the Number: ";
cin>>num;

first=(num/1000);
last=(num%10);
total=first+last;

cout<<endl<<"Addition of first digit and last digit is: "<<total;

return 0;

}