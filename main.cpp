//write a program that inputs the radius of circle
//and displays the circumference by using formula 2(PI)r
//store the value of PI in a constant by using DEFINE
//directive.
#include<iostream>
using namespace std;
#define PI 3.141

int main()
{
    float r, area;
    cout<<"Enter a radius: "<<endl;
    cin>>r;
    area = 2*PI*r;
    cout<<"Area is = "<<area<<endl;
    return 0;
}
