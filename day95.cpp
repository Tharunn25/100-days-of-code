// day 95 out of 100

// cpp program to find the mean of the an array

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout << "Enter array size:";
    cin >> n;

    int arr[n];
    cout << "\nEnter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum = sum + arr[i];

    float mean;
    mean = sum / n;

    cout << "\nThe mean of the array is " << mean;
}