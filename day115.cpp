// day 115 out of 200
// program to find shortest subsequence in the array

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int LCSLength(string X, string Y, int m, int n, auto &lookup)
{

    if (m == 0 || n == 0)
    {
        return 0;
    }

    string key = to_string(m) + "|" + to_string(n);

    if (lookup.find(key) == lookup.end())
    {

        if (X[m - 1] == Y[n - 1])
        {
            lookup[key] = LCSLength(X, Y, m - 1, n - 1, lookup) + 1;
        }
        else
        {

            lookup[key] = max(LCSLength(X, Y, m, n - 1, lookup),
                              LCSLength(X, Y, m - 1, n, lookup));
        }
    }

    return lookup[key];
}

int main()
{
    string X = "ABCBDAB", Y = "BDCABA";
    int m = X.length(), n = Y.length();

    unordered_map<string, int> lookup;

    int len = LCSLength(X, Y, m, n, lookup);

    cout << "The length of the shortest common supersequence is "
         << m + n - len;

    return 0;
}