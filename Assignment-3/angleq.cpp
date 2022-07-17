// If the three sides of a triangle are entered through the
// keyboard, write a program to check whether the triangle is
// isosceles, equilateral, scalene or right angled triangle.

// solution-
// 1.Equilateral Triangle -Three equal sides - Three equal angles, always 60°.
// 2.Isosceles Triangle - Two equal sides - Two equal angles.
// 3.Scalene Triangle - No equal sides - No equal angles.

#include<iostream>
using namespace std;

int main(){

    int angle1, angle2, angle3;

    cout<<endl<<"Enter the first Angle: ";
    cin>>angle1;
    cout<<endl<<"Enter the second Angle : ";
    cin>>angle2;
    cout<<endl<<"Enter the third Angle: ";
    cin>>angle3;


    if ((angle1+angle2+angle3==180)&&(angle1==60 && angle2==60 && angle3==60))
        cout<<endl<<"Triangle is -- Equilateral Triangle --";
    else if ((angle1+angle2+angle3==180)&&(angle1==angle2|| angle2==angle3 || angle1==angle3))
        cout<<endl<<"Triangle is -- Isosceles Triangle --";
    else if ((angle1+angle2+angle3==180)&&(angle1!=angle2|| angle2!=angle3 || angle1!=angle3))
        cout<<endl<<"Triangle is -- Scalene Triangle --";
    else
        cout<<"nor ";

    return 0;
}