// Any character is entered through the keyboard, write a
// program to determine whether the character entered is a
// capital letter, a small case letter, a digit or a special symbol.

// Characters ASCII Values
// A - Z                65 - 90
// a - z                97 - 122
// 0 - 9                48 - 57
// special symbols      0 - 47, 58 - 64, 91 - 96, 123 - 127


#include<iostream>
using namespace std;

int main(){

    char charactor;

    cout<<endl<<"Enter the Charactor: ";
    cin>>charactor;


    if(charactor>=65 && charactor<=90)
        cout<<endl<<"CAPITAL LETTER";
    else if(charactor>=97 && charactor<=122)
        cout<<endl<<"small letter";
    else if(charactor>=48 && charactor<=56)
        cout<<endl<<"Numbers";
    else if(charactor>=0 && charactor<=47 || charactor>=58 && charactor<=64 || charactor>=91 && charactor<=96 || charactor>=123 && charactor<=127)
        cout<<endl<<"Special Charactor..";
    else
        cout<<endl<<"Invalid";

    return 0;


}