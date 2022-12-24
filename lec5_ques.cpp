
// Lec5 leetq1 product -sum
/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int prod=1;
    int sum=0;

    while(n!=0)
    {
        int digit =n%10;
        prod=prod*digit;
        sum= sum+digit;

        n=n/10;
    }
    int answer=prod-sum;
    cout<<answer;
    return 0;
}*/

// Count no. of 1 bits in an integer

#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int n;
    cin >> n;

    while(n!=0)
    {
        if(n&1==1)
        {
            count++;
        }
        n=n>>1;
    }
    cout<<count;
    return 0;
}

