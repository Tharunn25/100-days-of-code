// day 80 out of 100

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void copy_string(char t1[], char t2[])
{
    int i = 0;
    for (i = 0; t1[i] != '\0'; i++)
    {
        t2[i] = t1[i];
        t2[i] = '\0';
    }
}

int main()
{
    char t1[100] = "Tharunn";
    char t2[100] = "";
    copy_string(t1, t2);
    cout << t2;

    return 0;
}
