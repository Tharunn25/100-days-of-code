//program to find the largest or smallest element in the array
#include <iostream>

using namespace std;

int main()
{
    int i,n;
    int arr[90];
    
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    
    for(i=0;i<n;++i){
        cout<<i+1<<".Enter the element:";
        cin>>arr[i];
    }
    for(i=0;i<n;++i){
       if(arr[0]>arr[i])
        arr[0]=arr[i];
    }
    
    cout<<"The smallest element of the array is : "<<arr[0];

    return 0;
}
