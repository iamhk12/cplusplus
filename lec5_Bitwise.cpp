
//LECTURE 5


// AND OR NOT XOR
/*#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << "a&b :" << (a&b);
    cout << endl;
    cout << "a|b :" << (a|b);
    cout << endl;
    cout << "~a : " << ~a;
    cout << endl;
    cout << "a^b : " << (a^b);
    cout << endl;
}
*/

// LEFT SHIFT RIGHT SHIFT
/*
#include <iostream>
using namespace std;

int main()
{
    cout<<(17<<1)<<endl;
    cout<<(17>>1)<<"\tnishtha raut"<<endl;
}
*/

// Prime or not

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool isprime;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = 0; 
        }
    }
    if (isprime = 0)
    {
        cout << "Not a prime number";
    }
    else
    {
        cout << "Prime number";
    }
    return 0;
}



