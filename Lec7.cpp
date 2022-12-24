// Reverse integer
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int digit;
    int ans=0;

    while(n!=0)
    {
        digit=n%10;
        ans = (ans*10)+digit;
        n=n/10;
    }
    cout<<ans;
}*/

// Reverse integer[range case]
/*
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int digit;
    int ans = 0;

    while (n != 0)
    {
        digit = n % 10;
        ans = (ans * 10) + digit;
        n = n / 10;
        if ((ans > INT_MAX) || (ans < INT_MIN))
        {
            return 0;
        }
    }
    cout << ans;
}
*/
// Power of 2 [then true] else [false]

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 0; i <= 30; i++)
    {
        if (ans == n)
        {
            cout << "true";//return true;
        }
        if (ans < INT_MAX / 2)
            ans = ans * 2;
    }
    cout << "false"; //return false
}
