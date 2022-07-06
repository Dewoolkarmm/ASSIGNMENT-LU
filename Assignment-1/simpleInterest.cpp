
#include <iostream>
using namespace std;

int main() {

 //formula= --- SI=(p*r*t)/100;
    int P,R,SI;
    float T;
    cout<<endl<<"ASSIGNMENT NO. 1---CALCULATE SIMPLE INTEREST";

    cout<<endl<<"Enter the Principle amount:";
    cin>>P;
    
    cout<<endl<<"Enter the Rate of Interest:";
    cin>>R;
    
    cout<<endl<<"Enter the Time in Years:";
    cin>>T;
    
    SI=(P*R*T)/100;
    cout<<endl<<"Simple Interest:"<<SI;
    
    return 0;
}