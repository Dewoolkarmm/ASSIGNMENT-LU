// If cost price and selling price of an item is input through the
// keyboard, write a program to determine whether the seller has
// made profit or incurred loss. Also determine how much profit
// he made or loss he incurred.


#include<iostream>
using namespace std;

int main(){

int costPrice,sellingPrice,profit,loss;

cout<<endl<<"Enter the Cost Price in Rupees: ";
cin>>costPrice;
cout<<endl<<"Enter the Selling Price in Rupees: ";
cin>>sellingPrice;

if(sellingPrice > costPrice){
    profit=(sellingPrice-costPrice);
    cout<<endl<<"Congratulations you made Profit of "<<profit<<" Rs.";
}else if(costPrice > sellingPrice){
    loss=(costPrice-sellingPrice);
    cout<<endl<<"Ohhhh you are is Loss with "<<loss<<" Rs.";
}else if(costPrice==sellingPrice){
    cout<<endl<<"You are in NO Profit No Loss Situation..";
}else{
    cout<<endl<<"Enter valid data...";
}
return 0;
}
