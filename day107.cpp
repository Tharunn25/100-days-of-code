#include <iostream>

using namespace std;

int second_largest(int arr[], int n)
{
    // rendu variable max 1 aprm max 2 nu declare pandrom
    int max1, max2;
    
    // namma random ah first two elements ah compare panni first max and min assign pandrom
    // edhu travers pandra app  maridum
    if (arr[0] > arr[1])
    {
        max1 = arr[0];
        max2 = arr[1];
    }

    else
    {
        max1 = arr[1];
        max2 = arr[0];
    }
    
    // i=2 la irundhu traverse pandrom ena first two elements ah munnadiye assign pannitom
    for (int i = 2; i < n; i++)
    {
        // namma traverse panna array periy array va irundhuchu na namma max1 vechi adh replace pandrom
        // replace pandra apa second max oda value va yum replace pandrom
        // second max value vadhu previous max1 value ah maridu
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        // mela irukka condtion la oru exception case irukku
        // namma traverse pandra array second element oda perusa irukkum but first element oda chinna dhan irukkum
        // appa namma second max element ah mathum mathurom
        else if (arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }
    // max2 va return padrom
    return max2;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;
    int result = second_largest(arr, 9);
    cout << "The second largest element in the array is : " << result;

    return 0;
}
