// If the ages of Ram, Shyam and Ajay are input through the
// keyboard, write a program to determine the youngest of the
// three.

#include<iostream>
using namespace std;

int main(){

    int ram, shyam, ajay;

    cout<<endl<<"Enter the Age of Ram: ";
    cin>>ram;

    cout<<endl<<"Enter the Age of Shaym: ";
    cin>>shyam;

    cout<<endl<<"Enter the Age of Ajay: ";
    cin>>ajay;

    if(ram<shyam && ram<ajay)
        cout<<endl<<"Ram is younger...";
    else if(shyam<ram && shyam<ajay)
        cout<<endl<<"Shyam is younger...";
    else if(ajay<ram && ajay<shyam)
        cout<<endl<<"Ajay is younger...";
    else if(ram==shyam && shyam==ajay && ram==ajay)
        cout<<endl<<"all are same age";
    else    
        cout<<endl<<"invalid";
return 0;
}