//declare the array and printing th array

#include<iostream>
using namespace std;

int main(){

    int num[10];
for (int i = 1; i <= 10; i++)
{
    cout<<endl<<"Enter the numbers: ";
    cin>>num[i];

}
for (int i = 1; i <= 10; i++)
{
  cout<<" "<<num[i];

}

return 0;

}