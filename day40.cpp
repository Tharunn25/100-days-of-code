//day 40 out of 100
//Binary Search
#include <iostream>

using namespace std;

int binarysearch(int left,int right,int arr[],int x)
{
    while(left<=right)
    {
     int mid;
     mid=left+(right-left)/2;
     if(arr[mid]==x)
     {
         return mid;
     }
     else if(arr[mid]<x)
     {
         left=mid+1;
     }
     else
     {
         right=mid-1;
     }
     }
   return -1; 
}

int main()
{
    int myarr[10];
    int num;
    int output;
    
    cout<<"Enter 10 numbers in ascending order: "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>myarr[i];
    }
    cout<<"Enter the number to be searched : "<<endl;
    cin>>num;
    
    output=binarysearch(0,9,myarr,num);
    
    if(output==-1)
    {
        cout<<"The given number is not present "<<endl;
    }
    else
    {
        cout<<"The given is present at the index position : "<<output<<endl;
    }

    return 0;
}
