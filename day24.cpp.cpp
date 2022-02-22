// code to display the sum of the given numbers
#include <iostream>

using namespace std;

int main()
{
    int n,i;
    int num[100],sum=0,average;
    
    cout<<"Enter a number: ";
    cin>>n;
    
    while(n>100 || n<=0)
    {
        cout<<"Enter the number again: ";
        cin>>n;
    }
    for(int i=0;i<n;i++){
        cout<<i+1<<".Enter a number : ";
        cin>>num[i];
        sum += num[i];
    }
    
    average=sum/n;
    cout<<"The average of entered numbers is : "<<average<<endl;

    return 0;
}
