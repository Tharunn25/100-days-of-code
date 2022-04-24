// day 82 out of 100

// cpp prgram to find an given element in the given sorted array (but the array is rotated )

#include <iostream>

using namespace std;

// modified binary search nu oru function ah write pandrom, aprm adhula given parameters ah pass pandrom
int mbs(int arr[], int l, int h, int k)
{

    // low is greater than high na adhu oru unsorted array so -1 ah return pandrom
    if (l > h)
    {
        return -1;
    }

    // mid kandupidika formula
    int mid = (l + h) / 2;

    if (arr[mid] == k)
    {
        return mid;
    }

    // edhula namma rendy condtion pakrom onnu given array ah two ah divide pandrom oru program left la search pannum
    // ennoru program right la search pannum

    // edhula first if condtion given array sorted ah illaye na check pandrathuku

    //[4,5,6,7,8,1,2,3] first if ls edhu vandhy renda divide agidu mid vechi
    // two arrays now are [4,5,6,7] and [8,1,2,3]

    if (arr[1] <= arr[mid])
    {
        // endh if condtion la k vandhy arr[1] oda greater ah irukkum aprm mid oda kammiya irukunam, apa dhan kuduthurukua element
        // adhkulla irukkum give key is 6 apa adhy first sub array oda mid la dhan irukku
        if (k >= arr[1] && k <= arr[mid])

            // first if condtion satisfy achi na namma recursive function pandrom, eppa kuduthurukua array va namma two subarray va prikurom
            // epa nammaku given key vandhu first subarray la irukku therijidichi
            // [4,5,6,7] la mid 6 so endh parameters poi thiruppi function ah call pannum
            // ex low=4,high=7, mid = 6
            // nammaku edhy left of the subarray la irukku nu therijidichi so kila irukka condtion execute agum
            return mbs(arr, l, mid - 1, k);

        // edhuvey given key vandhu 7 ah irundhuchu na endha statement execute agum
        return mbs(arr, mid + 1, h, k);
    }
    // kiila irukk a if condtion right la irundhuchu na endh condtion execute agum
    // [8,1,2,3] la 3 ah kandupidkaum na
    // low=8, high = 3, mid = c2
    if (k >= arr[mid] && k <= arr[h])

        // 3 vandhu left side of the array irukku so endha condtion execute agadhu

        return mbs(arr, mid + 1, h, k);

    // 3 is right side of the  mid
    // 3 vandhu right la irukurathu ala endha condtion execute agum

    return mbs(arr, l, mid - 1, k);
}

int main()
{

    // array input ah kudukurom
    int arr[] = {4, 5, 6, 7, 8, 1, 2, 3};
    // array oda size ah kandu pidikirom
    int n = sizeof(arr) / (arr[0]);
    // kandupidika vendiya key ah kudukurom
    int key = 10;
    // int i nu solli function call pandrom, n-1 will be high enna last position ah sort panna venam
    int i = mbs(arr, 0, n - 1, key);

    if (i != -1)
        cout << "The given element is present in: " << i;

    else
        cout << "The element is not present in the array";
    return 0;
}