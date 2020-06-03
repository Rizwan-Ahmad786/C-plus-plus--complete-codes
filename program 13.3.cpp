//write a class circle with one data member radius.
//write three member function get_radius() to set radius value
//with parameter value, area() to display radius and circum()
//to calculate and display circumference of circle.

#include<iostream>
using namespace std;

class circle
{
private:
    float radius;
public:
    void get_radius(float r)
    {
    radius = r;
    }
    void area()
    {
        cout<<"\nArea of circle: "<<3.14*radius*radius<<endl;
    }
    void circum()
    {
        cout<<"circumference of circle : "<<2*3.14*radius;
    }
};

int main()
{
    circle c1;
    float rad;
    cout<<"\nEnter radius: "<<endl;
    cin>>rad;
    c1.get_radius(rad);
    c1.area();
    c1.circum();

    return 0;
}
