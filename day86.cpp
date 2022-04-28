class Solution
{
public:
    int getSum(int a[], int n)
    {
        // Your code goes here
        n = sizeof(a) / sizeof(a[0]);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        cout << sum;
    }
};