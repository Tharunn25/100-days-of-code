// day 75 out of 100

// cpp program to understand the goto function

#include <iostream>
using namespace std;

void oore(int num)
{

    if (num % 2 == 0)
        goto even;

    else
        goto odd;

even:

    cout << num << " is a even number";
    return;

odd:
    cout << num << " is a odd number";
}

int main()
{
    int num = 13;
    oore(num);
    return 0;
}