// day 69 out of 100

// C++ program to illustrate Array Name as Pointers

#include <bits/stdc++.h>
using namespace std;

void geeks()
{
    int val[3] = {5, 10, 15};

    int *ptr;

    ptr = val;
    cout << "Elements of the array are: ";
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2];

    return;
}


int main()
{
    geeks();
    return 0;
}
