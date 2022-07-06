#include<iostream>
using namespace std;

int main(){

 //formula---Fahrenheit= (degree × 9/5 or 1.8) + 32
    float Fahrenheit;
    int Temp;

    cout<<endl<<"ASSIGNMENT NO. 4---CONVERT CELCIUS TO FAHRENHEIT---";

    cout<<endl<<"Enter the Temparature in degree :";
    cin>>Temp;

    Fahrenheit=((Temp * 1.8) + 32 );

    cout<<endl<<+Temp<<" C = "<<Fahrenheit<<" F";

    return 0;
}