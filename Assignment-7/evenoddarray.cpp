// counting even odd in array of 10 elements

#include<iostream>
using namespace std;

int main(){

    int num[10], even=0, odd=0;

    for (int i = 0; i < 10; i++)
    {
        cout<<endl<<"Enter the values: ";
        cin>>num[i];

        if(num[i]%2==0){
            even++;
        }
        else if( num[i]%2!=0){
            odd++;
        }
        else{
            cout<<endl<<"Invalid Number...";
        }
    }
    cout<<endl<<"Even count is: "<<even;
    cout<<endl<<"Odd count is: "<<odd;
    
    return 0;
}