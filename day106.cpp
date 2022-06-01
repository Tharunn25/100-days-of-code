// day 106 out of 100

// C++ program to demonstrate uses of some string function

#include <bits/stdc++.h>

using namespace std;

string returnFloatingPart(string str)
{
    int pos = str.find(".");
    if (pos == string::npos)
        return "";
    else
        return str.substr(pos + 1);
}

bool containsOnlyDigit(string str)
{
    int l = str.length();
    for (int i = 0; i < l; i++)
    {
        if (str.at(i) < '0' || str.at(i) > '9')
            return false;
    }

    return true;
}

string replaceBlankWith20(string str)
{
    string replaceby = "%20";
    int n = 0;

    while ((n = str.find(" ", n)) != string::npos)
    {
        str.replace(n, 1, replaceby);
        n += replaceby.length();
    }
    return str;
}

int main()
{
    string fnum = "23.342";
    cout << "Floating part is : " << returnFloatingPart(fnum)
         << endl;

    string num = "3452";
    if (containsOnlyDigit(num))
        cout << "string contains only digit" << endl;

    string urlex = "google com in";
    cout << replaceBlankWith20(urlex) << endl;

    return 0;
}
