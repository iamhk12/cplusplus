#include <iostream>
using namespace std;

int main()
{
    // pattern 1:
    int n, a;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int j = 0;
        a = n - i;
        while (j < n)
        {
            cout << a;
            while(a>0)
            {
                a = a - 1;
            }
            j = j + 1;
        }
        cout << "\n";
        i = i + 1;
    }
}