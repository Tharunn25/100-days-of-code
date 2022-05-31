// day 112 out of 200
#include <iostream>
#include <string>
using namespace std;

void removeDuplicates(string &s)
{
    char prev;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        if (prev == *it)
        {
            s.erase(it);
            it--;
        }
        else {
            prev = *it;
        }
    }
}
 
int main()
{
    string s = "AAABBCDDD";
 
    removeDuplicates(s);
    cout << s << endl;
 
    return 0;
}
