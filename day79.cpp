// day 79 out of 100

// cpp program to rotate the array given times

#include <iostream>

using namespace std;

// oru oru element ah change panna oru function create pandrom
// d evlo irukko adhu veraikkum dhan pogum endha function
void leftrotateone(int arr[], int n)
{
    // temp declare pandrom to store n-1 element
    int temp = arr[0];
    // loop vandhu n-1 times pogum
    for (int i = 0; i < n - 1; i++)
        // array oda index add panni adhoda values change pandrom
        arr[i] = arr[i + 1];
    // kadaisila n-1 la irukura element ah temp la store pandrom
    arr[n - 1] = temp;
}

// leftrotate nu oru overall oru function create pandrom
void leftrotate(int arr[], int d, int n)
{
    // loop vandhu kuduthurukka d times dhan pogum
    for (int i = 0; i < d; i++)
        // mela irukura function ah endha function call pannudhu
        leftrotateone(arr, n);
}

// function to print the array
void printarry(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    // array oda size ah kandupidikurathuku code edhu
    int n = sizeof(arr) / sizeof(arr[0]);

    // function call
    leftrotate(arr, 2, n);
    printarry(arr, n);

    return 0;
}
