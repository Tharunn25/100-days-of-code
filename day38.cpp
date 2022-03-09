//day 38 out of 100
#include <iostream>

using namespace std;

void linersearch(int a[],int n){
    int temp = -1;
    for(int i=0;i<5;i++){
        if(a[i]==n){
            cout<<"The given element is at: "<<i<<endl;
            temp=0;
        }
        
    }
    if(temp==-1){
            cout<<"The given element is not found"<<endl;
        }
}

int main()
{
    int arr[5]={2,5,21,6,34};
    cout<<"Enter the element to be searched: ";
    int num;
    cin>>num;
    linersearch(arr,num);

    return 0;
}
