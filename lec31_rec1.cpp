// factorial
/*
#include <iostream>
using namespace std;

int fact(int n)
{
    // base case
    if (n == 0)
        return 1;

    return n * fact(n - 1);
}

int main()
{

    int n;
    cout << "Enter the number :: ";
    cin >> n;

    int ans = fact(n);

    cout << ans << endl;
}
* /
// 2^n
/*
#include <iostream>
using namespace std;

int powerof2(int n)
{
    // base case
    if (n == 0)
        return 1;

    // recursive relation
    return 2 * powerof2(n - 1);
}

int main()
{

    int n;
    cout << "Enter the number :: ";
    cin >> n;

    int ans = powerof2(n);
    cout << ans << endl;
}
*/

// print counting
#include <iostream>
using namespace std;

void printcounting1(int n)
{
    if (n == 0)
        return;
    printcounting1(n - 1);

    cout << n << " ";
}

void printcounting2(int n)
{
    if (n == 0)
        return ;

    cout << n << " ";

    printcounting2(n - 1);
}

int main()
{

    int n;
    cout << "Enter the number :: ";
    cin >> n;

    printcounting1(n);
    cout << endl;
    printcounting2(n);
}
