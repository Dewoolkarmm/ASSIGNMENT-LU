//   1  2  3  4  5
//   6  7  8  9 10
//  11 12 13 14 15
//  16 17 18 19 20
//  21 22 23 24 25

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int i, j, num=1, count;


    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
           cout<<setw(3)<<num;
           num=num+1;
            
        }
        cout<<endl;
    }
    return 0;
}