#include<iostream>
using namespace std;

int main(){

    int num, multi;
    cout<<endl<<"Enter thh number to generate table: ";
    cin>>num;
    for (int i = 1; i <= 10; i++)
    {
       multi = num * i;
        cout<<endl<<num<<" * "<<i<<" = "<<multi;
    }
    
}