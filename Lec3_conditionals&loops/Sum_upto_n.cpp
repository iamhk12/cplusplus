// Print  sum from 1 to N

#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, sum = 0;
    cin >> n;

    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << "Value of sum is : " << sum;
    return 0;
}
