#include <iostream>

using namespace std;

int factorial(int n)
{

    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * (factorial(n - 1));
    }
}

int main()
{
    int num;
    cout << "Enter a number to find a factorial" << endl;
    cin >> num;
    int result(factorial(num));
    cout << result;

    return 0;
}