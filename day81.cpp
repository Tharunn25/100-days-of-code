// day 81 out of 100
// cpp program to change the upper case letter to lowercase letter

#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char str[] = "HEY THIS IS THARUNN.";
    char ch;
    for (int i = 0; i < strlen(str); i++)
    {
        // tolower is an inbuilt function under cctype to change the upper case letter to lower case letter
        ch = tolower(str[i]);
        // here also the converstion take place letter by letter only because of that only we are giving cout of ch inside the loop
        cout << ch;
    }
    return 0;
}