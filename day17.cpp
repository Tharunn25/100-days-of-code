//day 17 out of 100
#include <iostream>

using namespace std;

void passbyvalue(int a){
    a=90;
}
void passbyreference(int* a){
    *a=90;
}

int main()
{
    int x = 10;
    passbyreference(&x);
    cout<<x<<endl;

    return 0;
}
