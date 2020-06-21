
//  C++ Program to Swap Two Numbers

#include<iostream>
using namespace std;
int main()
{
    int a,b,SWAP;
    cout<<"ENTER THE FIRST VALUE = ";
    cin>>a;
    cout<<"ENTER THE SECOUND VALUE = ";
    cin>>b;
    cout<<"YOU INPUT TWO NUMBER AS ("<<a<<" and "<<b<<")"<<endl;
    SWAP = a;
    a = b;
    b = SWAP;
    cout<<" VALUES AFTER SWAPPING LOCK LIKE ("<<a<<" and "<<b<<")"<<endl;
    return 0;
}
