//  PROGRAM TO FIND MAXIMUM VALUE IN ARRAY.
#include <iostream>
using namespace std;

int main()
{
    int size,index = -1;
    cout<<"Enter the size of array: ";
    cin>>size;
    float array[size],max;
    
    for(int i=0; i<size; i++)
    {
        cout<<"Enter "<<i+1<<" value: ";
        cin>>array[i];
    }
    cout<<"Enter a value to check the maximum value in data:";
    cin>>max;
    
    for(int i=0; i<size; i++)
        if(max <= array[i])
        {
            max = array[i];
            index = i;
        }
    if(index==-1)
        cout<<"\nCannot found the maximum number because\nthe value you enter "
        << max << " is larger from the given data: \n"<<endl;
    else
    {
        cout<<"\nThe maximum value is "<< max <<endl<<endl;
        cout<<"value found at index number "<<index<<endl;
        
    }
}
