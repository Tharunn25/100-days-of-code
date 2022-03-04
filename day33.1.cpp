//day 33 out of 100
#include <iostream>

using namespace std;

void address(){
    
    int v[] = {3,4,5};
    int*ptr;
    ptr=v;
    cout<<"The elements of the array are: ";
    cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2];
    
}

int main()
{
    
   address();
    return 0;
}
