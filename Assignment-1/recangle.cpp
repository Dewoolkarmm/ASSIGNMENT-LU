#include<iostream>
using namespace std;

int main(){

     //formulas--- Area = l * w ---Peremeter= 2(l * b)---
    int area, perimeter,length,width;

     cout<<endl<<"ASSIGNMENT NO. 3---CALCULATE AREA AND PARAMETER OF RECTANGLE---";

     cout<<endl<<"Enter the value of length :";
     cin>>length;

     cout<<endl<<"Enter the value of width :";
     cin>>width;
     
     cout<<endl<<" calculating Area of Reactagle";
     area=length*width;

     cout<<endl<<"Area of Square is:"<<area;
     
     cout<<endl<<" calculating perimeter of Rectangle";

     perimeter=(2*(length+width));
     cout<<endl<<"Perimeter of Rectangle is:"<<perimeter;

return 0;

}