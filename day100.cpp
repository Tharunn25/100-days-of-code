// day 100 out of 100

// array vector concept

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> g1;

    for (int i = 0; i < 5; i++)
        g1.push_back(i);
    for (auto i = g1.begin(); i != g1.end(); i++)
        cout << *i << " ";
    cout << endl;
    for (auto i = g1.cbegin(); i != g1.cend(); i++)
        cout << *i << " ";
    cout << endl;
    for (auto i = g1.rbegin(); i != g1.rend(); i++)
        cout << *i << " ";
    cout << endl;
    for (auto i = g1.crbegin(); i != g1.crend(); i++)
        cout << *i << " ";
    cout << endl;

    return 0;
}