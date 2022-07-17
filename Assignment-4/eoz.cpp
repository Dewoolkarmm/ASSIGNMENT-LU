// WAP for checking 10 different numbers for positive negative and zero

#include<iostream>
using namespace std;

int main(){

    int num,positive=0,negative=0,zero=0;

    for (int i = 0; i < 10; i++)
    {
        cout<<endl<<"Enter the Number: ";
        cin>>num;

        if (num>0)
          positive++;
        
        else if (num<0)
            negative++;

        else if (num==0)
            zero++;

        else
            cout<<endl<<"not a Number..";
    }

    cout<<endl<<"total positive Numberes are: "<<positive;
    cout<<endl<<"total negative Numberes are: "<<negative;
    cout<<endl<<"total zero Numberes are: "<<zero;


    return 0;

    
}