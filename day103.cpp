// day 103 out of 1000

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isIsogram(string word)
{
    for (int i = 0; i < word.size() - 1; i++)
    {
        if (word[i] == word[i + 1])
            return false;
    }
    return true;
}

void solve_test()
{

    string word;
    cin >> word;

    sort(word.begin(), word.end());

    if (isIsogram(word))
        cout << 1 << endl;
    else
        cout << 0 << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        solve_test();

    return 0;
}