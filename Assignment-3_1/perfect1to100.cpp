// WAP to print perfect no from 1 to 100.

#include<iostream>
using namespace std;
int main ()
{  
    int i, num, sum;
    cout<<"Perfect Numbers are: ";
    for ( num = 1; num <= 100; num++)
    {
  
    for (i=1,sum=0; i < num; i++)
    {
        if (num % i== 0)
            sum = sum + i;
    }
    if (sum == num)
        cout<<" "<<num<<" ";
      }
    
    return 0;
}