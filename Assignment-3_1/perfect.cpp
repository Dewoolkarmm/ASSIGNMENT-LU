// WAP to print perfect number or not .

#include<iostream>
using namespace std;
int main ()
{  
    int i, num, rem, sum=0;
    cout << "Enter the number : ";
    cin >> num;
    for (i=1; i < num; i++)
    {
        rem = num % i;
        if (rem == 0)
            sum = sum + i;
    }
    if (sum == num)
        cout<<num<<" is a perfect number.";
    else
        cout<<num<<" is not a perfect number.";
    return 0;
}