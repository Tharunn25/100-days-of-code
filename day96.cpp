// day 96 out of 100
// cpp programt to conver uppercase alphabets to lowercase

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[30];
    cout << "Enter the string in uppercase letters : ";
    cin >> s;

    for (int i = 0; i < strlen(s); i++)
    {
        s[i] = s[i] = 32;
    }

    cout << "The string after converted to lowercase is : " << s;
    return 0;
}
