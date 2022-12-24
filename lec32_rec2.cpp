// Reach home example
/*
#include<iostream>
using namespace std;

void reachhome(int src, int dest)
{
    cout<<"Source :: "<<src<<" Dest:: "<<dest<<endl;
    //base case
    if (src == dest){
    cout<<"Pohoch gaya"<<endl;
    return ;
    }
    src++;

    reachhome (src,dest);
}
int main()
{
    int dest = 10;
    int src = 1;

    reachhome(src,dest);
}
*/

// Fibonacci no.    // 0 1 1 2 3 5 8 13 21 34 ........
/*
#include<iostream>
using namespace std;

//0 is the zeroth term of fib series

int fibterm(int n)
{

        //base  case
        if(n==0)
            return 0;
        if(n==1)
            return 1;

        return fibterm(n-1)+fibterm(n-2);

}

int main()
{
    int n;
    cout<<" Enter nth term you want of fibonaci series: ";
    cin>>n;

    int ans = fibterm(n);
    cout<<ans<<endl;
}
*/

// Climb stairs
/*
#include <iostream>
using namespace std;

int countDistinctWays(int n)
{

    if (n == 0)
        return 1;
    if (n < 0)
        return 0;

    return countDistinctWays(n - 1) + countDistinctWays(n - 2);
}

int main()
{
    cout << countDistinctWays(5);
}
*/

// Say digits
/*
#include <iostream>
using namespace std;

string arr[10] = {"zero", "one", "two",
                  "three", "four", "five",
                  "six", "seven", "eight",
                  "nine"};

void saydigits(int n)
{
    // base case
    if (n == 0)
        return;

    // processing
    int digit = n % 10;
    n = n / 10;
    saydigits(n);

    
    cout << arr[digit] << " ";
}

int main()
{
    int n;
    cin >> n;

    saydigits(n);

    return 0;
}*/