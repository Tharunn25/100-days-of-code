// day 88 out of 100

// cpp program to find the given array is palindrome or nor like every element in the array should

// palindrom for that

class Solution
{
public:
    int PalinArray(int a[], int n)
    {
        // code here
        for (int i = 0; i < n; i++)
        {
            int rev = 0;
            int r;
            int temp = a[i];
            while (a[i] != 0)
            {
                r = temp % 10;
                rev = rev * 10 + r;
                temp = temp / 10;
            }
            if (a[i] != rev)
                return 0;
        }
        return 1;
    };
