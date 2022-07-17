// If the marks obtained by a student in five different subjects
// are input through the keyboard, find out the aggregate marks
// and percentage marks obtained by the student. Assume that
// the maximum marks that can be obtained by a student in each
// subject is 100.

#include<iostream>
using namespace std;

int main(){

    int sub1, sub2, sub3, sub4, sub5, aggMarks;
    float persentage;

    cout<<endl<<"Enter marks of Subject-1 out off 100 : ";
    cin>>sub1; 
    cout<<endl<<"Enter marks of Subject-2 out off 100 : ";
    cin>>sub2; 
    cout<<endl<<"Enter marks of Subject-3 out off 100 : ";
    cin>>sub3; 
    cout<<endl<<"Enter marks of Subject-4 out off 100 : ";
    cin>>sub4; 
    cout<<endl<<"Enter marks of Subject-5 out off 100 : ";
    cin>>sub5; 

    aggMarks = (sub1+sub2+sub3+sub4+sub5);
    persentage = ((aggMarks*100)/500);

    cout<<endl<<"The aggregate Mark of Student is: "<<aggMarks<<" marks";
    cout<<endl<<"Parsentage of Student is: "<<persentage<<" %";

    return 0;

}
