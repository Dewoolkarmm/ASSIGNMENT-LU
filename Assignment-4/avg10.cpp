// WAP for printing total and average of 10 different no’s

#include<iostream>
using namespace std;


int main(){

    int num,sum=0,count=10;
    float avg;
    for (int i = 1; i <= count; i++)
    {
        cout<<endl<<"Enter the numbers: ";
        cin>>num;

        sum = sum +  num;
    }
    avg = sum/count;

    cout<<endl<<"The avarage of 10 Numbers is: "<<avg;
    return 0;
}