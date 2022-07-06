#include<iostream>
using namespace std;

int main(){

    int a1, a2, a3;

    cout<<endl<<"Enter the First Angle: ";
    cin>>a1;
    cout<<endl<<"Enter the second Angle: ";
    cin>>a2;
    cout<<endl<<"Enter the third Angle: ";
    cin>>a3;

    if((a1+a2+a3==180) && a1!=0 && a2!=0 && a3!=0 )
    cout<<endl<<" Triangle is Possible with angles- "<<a1<<" "<<a2<<" "<<a3;
    else
    cout<<endl<<" Triangle NOT possible with angles- "<<a1<<" "<<a2<<" "<<a3;

    return 0;
}