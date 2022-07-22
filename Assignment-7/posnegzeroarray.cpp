// positive negative and zero in array of 10 elements

#include<iostream>
using namespace std;

int main(){

    int num[10], positive=0, negative=0, zero=0;

    for (int i = 0; i < 10; i++)
    {
        cout<<endl<<"Enter the values :";
        cin>>num[i];

        if (num[i]>0)
            positive++;
        else if(num[i]<0)
            negative++;
        else if(num[i]==0)
            zero++;
        else{
            cout<<endl<<"Not a number";
        }
    }
        cout<<endl<<"positive Numbers: "<<positive;
        cout<<endl<<"negative Numbers: "<<negative;
        cout<<endl<<"Zero numbers: "<<zero;

    
        return 0;
}