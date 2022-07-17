
//   1  0  1  0
//   0  1  0  1
//   1  0  1  0
//   0  1  0  1

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int num,pr;
    cout<<endl<<"enter the range: ";
    cin>>num;

    for (int i = 1; i <= num; i++)
    {
     
        for (int j = 1; j <= num; j++)
        {
            int total=i+j;
            
            if(total%2==0)
                 pr=1;
            else
                pr=0;
         
            cout<<setw(3)<<pr;
        }
        cout<<endl;
    }
    
    return 0;
}