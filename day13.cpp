//day 13 out of 100#include <iostream>
#include <iostream>

using namespace std;


int main()
{
    float arr[5];
    float*ptr;
    

    
    for(int i=0;i<5;i++){
        cout<<&arr[i]<<endl;
    }
    ptr=arr;
    
    for(int j=0;j<5;j++){
        cout<<ptr+j<<endl;
    }
    return 0;
}
