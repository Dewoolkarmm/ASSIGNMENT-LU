// An Insurance company follows following rules to calculate
// premium.

// (1) If a person’s health is excellent and the person is between
// 25 and 35 years of age and lives in a city and is a male
// then the premium is Rs. 4 per thousand and his policy
// amount cannot exceed Rs. 2 lakhs.
// (2) If a person satisfies all the above conditions except that
// the sex is female then the premium is Rs. 3 per thousand
// and her policy amount cannot exceed Rs. 1 lakh.
// (3) If a person’s health is poor and the person is between 25
// and 35 years of age and lives in a village and is a male
// then the premium is Rs. 6 per thousand and his policy
// cannot exceed Rs. 10,000.
// (4) In all other cases the person is not insured.
// Write a program to output whether the person should be
// insured or not, his/her premium rate

#include<iostream>
using namespace std;

int main(){

    char health, locality, gender;
    int age;
    cout<<endl<<"Enter the Health of Person (excellent-E/poor-P/satifice-S) : ";
    cin>>health;
    cout<<endl<<"Enter the age of Person: ";
    cin>>age;
    cout<<endl<<"Enter the Locality of Person (city-C/village-V): ";
    cin>>locality;
    cout<<endl<<"Enter the gender of Person:(male-M/female-F): ";
    cin>>gender;

    if((health=='E'||health=='e') && (age>=25 && age<=35) && (locality=='C'||locality=='c' && (gender=='m' || gender=='M')) )
    cout<<endl<<"the premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs." ;
    else if((health=='S'||health=='s') && (age>=25 && age<=35) && (locality=='C'||locality=='c') && (gender=='f' ||gender=='F'))
    cout<<endl<<"the premium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakh.";
    else if((health=='P'||health=='p') && (age>=25 && age<=35) && (locality=='V'||locality=='v') && (gender=='m' ||gender=='M'))
    cout<<endl<<"the premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000.";
    else
    cout<<endl<<"the person is not insured.";
    return 0;
}