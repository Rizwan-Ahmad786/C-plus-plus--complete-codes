//      Program 3.9
//write a program that solves the following expression.
//a*b/(-c*31%13)*d
//Assuming the values of variables are as follows.
//a=10, b=20, c=15, d=8,

#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    a=10;
    b=20;
    c=15;
    d=8;
    e=a*b/(-c*31%13)*d;
    cout<<"Result of expression is: "<<e<<endl;
    return 0;
    
    
}
