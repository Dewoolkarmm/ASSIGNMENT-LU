// If the three sides of a triangle are entered through the
// keyboard, write a program to check whether the triangle is
// valid or not. The triangle is valid if the sum of two sides is
// greater than the largest of the three sides.

#include<iostream>
using namespace std;

int main(){

    int a1, a2, a3, total;

    cout<<endl<<"Enter the First Angle: ";
    cin>>a1;
    cout<<endl<<"Enter the second Angle: ";
    cin>>a2;
    cout<<endl<<"Enter the third Angle: ";
    cin>>a3;

    total=(a1+a2+a3);

    if((total==180) && a1!=0 && a2!=0 && a3!=0 && (a1+a2>a3)||(a1>a2+a3)||(a1+a3>a2))
    cout<<endl<<"Tringle is Valid";

    return 0;
}