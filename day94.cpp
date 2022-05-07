// day 94 out of 100

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array : ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " number of elements in the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the kth element needed to swap : ";
    cin >> k;

    int temp = arr[k - 1];
    arr[k - 1] = arr[n - k];
    arr[n - k] = temp;

    cout << "The array after swapping is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
