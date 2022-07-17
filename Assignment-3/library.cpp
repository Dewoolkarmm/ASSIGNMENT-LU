// A library charges a fine for every book returned late. For first
// 5 days the fine is 50 paise, for 6-10 days fine is one rupee and
// above 10 days fine is 5 rupees. If you return the book after 30
// days your membership will be cancelled. Write a program to
// accept the number of days the member is late to return the
// book and display the fine or the appropriate message.

#include<iostream>
using namespace std;

int main(){

    int days;
    float charges;

    cout<<endl<<"Book return days:";
    cin>>days;

    if(days==0)
    cout<<endl<<"you entered zero";
    else if(days>=1 && days<=5){
    charges=50;
    cout<<endl<<charges<<" rs. late charge applied...";
    }
    else if(days>=6 && days<=10){
    charges=1;
    cout<<endl<<charges<<" rs. late charge applied...";
    }
    else if(days>=10 && days<30){
    charges=5;
    cout<<endl<<charges<<" rs. late charge applied...";
    }
    else if(days>=30)
    cout<<endl<<"Your Membership will be cancelled....";
    else
    cout<<endl<<"Invalid input";

    return 0;
}