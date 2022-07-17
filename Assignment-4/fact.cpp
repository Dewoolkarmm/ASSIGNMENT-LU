// WAP for calculating factorial of a entered no.
// solution:
// The factorial of a number is the product of all the integers from 1 to that number. 

#include<iostream>
using namespace std;

int main(){

    int fact=1,num;
    cout<<endl<<"Enter the Number: ";
    cin>>num;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout<<fact;
}