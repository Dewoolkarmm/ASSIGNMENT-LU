//  If a five-digit number is input through the keyboard, write a
// program to reverse the number.
 
#include<iostream>
using namespace std;
    
    int main(){

        int num ,d1,d2,d3,d4,d5,reverseNum;

        cout<<endl<<"Enter the 5 digit Number: ";
        cin>>num;
        
        d1=num%10;
	    d2=(num/10)%10;
	    d3=(num/100)%10;
	    d4=(num/1000)%10;
	    d5=(num/10000);

        reverseNum=((d1*10000)+(d2*1000)+(d3*100)+(d4*10)+d5);
        cout<<endl<<"Reverse Number :"<<reverseNum;

        return 0;
    }