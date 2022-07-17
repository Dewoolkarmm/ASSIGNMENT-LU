// The distance between two cities (in km.) is input through the
// keyboard. Write a program to convert and print this distance
// in meters, feet, inches and centimeters.

#include<iostream>
using namespace std;

int main(){

    int kilometer, meter, centimeter;
    float feet, inches;

    cout<<endl<<"Enter the Distance in Kilometer: ";
    cin>>kilometer;

    meter = kilometer * 1000;
    feet = kilometer * 3280.839895;
    inches = kilometer * 39370.07874;
    centimeter = kilometer * 100000;

    cout<<endl<<kilometer<<" Km = "<<meter<<" M.";
    cout<<endl<<kilometer<<" Km = "<<feet<<" ft.";
    cout<<endl<<kilometer<<" Km = "<<inches<<" in.";
    cout<<endl<<kilometer<<" Km = "<<centimeter<<" cm.";

    return 0;
}