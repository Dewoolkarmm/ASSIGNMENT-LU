// WAP for printing fibonacii series:  0,1,1,2,3,5,8,13,21,….   Up till n digits in series.

#include<iostream>
using namespace std;

int main(){

    int num1=0;
    int num2=1; 
    int num3, counter, i;

    cout<<endl<<"Enter the the Limit: ";
    cin>>counter;
    
    cout<<num1<<" "<<num2<<" ";
    for (int i = 2; i <= counter; i++)
    {
        num3 = num1 + num2;
        cout<<num3<<" ";
        num1 = num2;
        num2 = num3;
    }
    return 0;
    
}