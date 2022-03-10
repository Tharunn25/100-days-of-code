//day 39 out of 100
#include <iostream>

using namespace std;

void callbyvalue(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void callbyrefernce(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void callbyaddress(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    
}


int main()
{
    int a=10;
    int b=20;
    callbyrefernce(a,b);
    cout<<a<<" "<<b<<endl;
    callbyvalue(a,b);
    cout<<a<<" "<<b<<endl;
    callbyaddress(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
