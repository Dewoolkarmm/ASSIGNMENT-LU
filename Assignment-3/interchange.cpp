// Two numbers are input through the keyboard into two
// locations C and D. Write a program to interchange the
// contents of C and D.

#include<iostream>
using namespace std;

int main(){

    int c, d, temp;

    cout<<endl<<"Enter the number in C: ";
    cin>>c;
    cout<<endl<<"Enter the number in D: ";
    cin>>d;

    temp=c;
    c=d;
    d=temp;

    cout<<endl<<"After interchange values are: C = "<<c<<" | D = "<<d;

    return 0;
}