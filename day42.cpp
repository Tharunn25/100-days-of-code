//day 42 out of 100
//insertion sort

#include <iostream>

using namespace std;

void insertionsort(int arr[])
{
    int j=0;
    int key=0;
    
    for(int i=1;i<5;i++)
    {
        key=arr[i];
        j=i-1;
        
    while( j>=0 && arr[j]>key)
    {
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=key;
  }
}

int main()
{
    int isort[5];
    
    cout<<"Enter any five numbers: "<<endl;
    
    for(int i=0;i<5;i++)
    {
        cin>>isort[i];
    }
    
    cout<<"The unsorted array is:"<<endl;
     for(int i=0;i<5;i++)
    {
        cout<<isort[i]<<" ";
    }
    cout<<endl;
    
    insertionsort(isort);

    cout<<"The sorted array is :"<<endl;
     for(int i=0;i<5;i++)
    {
        cout<<isort[i]<<" ";
    }

     
      return 0;
}
