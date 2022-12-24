// Basic switch case
/*
#include <iostream>
using namespace std;
int main()
{
    int num = 2;
    cout << endl;
    switch (num)
    {
    case 1:
        cout << "First" << endl;
        break;
    case 2:
        cout << "Second" << endl;
        break;
    default:
        cout << "It is default case" << endl;
    }
    cout << endl;
    return 0;
}
*/
// Mini calculator
/*
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    char op;
    cout << "Enter the Operation you want to perform" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '/':
        cout << (a / b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
        break;
    default:
        cout << "Enter a valid operation";
        break;
    }
}
*/

// Currency Notes
/*
#include <iostream>
using namespace std;

int main()
{
  int amount;
  cin>>amount;
  int Rs100 , Rs50 , Rs20 , Rs1;

  switch(1)
  {
      case 1: Rs100=amount/100;
              amount=amount%100;
              cout<<"No of 100 Rupee ="<<Rs100<<endl;


      case 2: Rs50=amount/50;
              amount=amount%50;
              cout<<"No of 50 Rupee ="<<Rs50<<endl;


      case 3: Rs20=amount/20;
              amount=amount%20;
              cout<<"No of 20 Rupee ="<<Rs20<<endl;


      case 4: Rs1=amount/1;
              amount=amount%1;
              cout<<"No of 1 Rupee ="<<Rs1<<endl;

           }
        return 0;
}
*/
// Power without using function pow(a,b)
/*
#include <iostream>
using namespace std;
int main()
{
    // pow(a,b)
    int a, b;

    cin >> a >> b;

    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }

    cout << "answer is : " << ans << endl; //1st f

int c, d;

    cin >> c >> d;

    int ans2 = 1;

    for (int i = 1; i <= d; i++)
    {
        ans2 = ans2 * c;
    }

    cout << "answer is : " << ans2 << endl;

    return 0;
}
*/
// Function for power
/*
#include <iostream>
using namespace std;

int power()
{
    int a, b;
    cin >> a >> b;
    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{

    int answer = power();
    cout << "Answer is " << answer << endl;

    answer = power();
    cout << "Answer is " << answer << endl;
    return 0;
}
*/

// Function for even or odd
/*
#include <iostream>
using namespace std;
// 1->Even
// 0->odd
bool isEven(int a)
{
    // odd
    if (a & 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    cin >> num;

    int ans = isEven(num);
    if (ans == 0)
    {
        cout << "ODD";
    }
    else
    {
        cout << "EVEN";
    }
}*/

// nCr
/*
#include <iostream>
using namespace std;

int fact(int n)
{

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int ncr;
    ncr = fact(n) / (fact(r) * fact(n - r));
    return ncr;
}

int main()
{
    int n, r;
    cout << "Value of n" << endl;
    cin >> n;
    cout << "Value of r" << endl;
    cin >> r;

    int ans = nCr(n, r);
    cout << "Answer of nCr is " << ans;
}
*/

// Print counting
/*
#include <iostream>
using namespace std;

void printcount(int n)
{

    cout << endl
         << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}

int main()
{
    int n;
    cout << "Enter your no.: ";
    cin >> n;

    printcount(n);
}
*/
// Prime No.
/*
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    bool pr;
    // Prime=1
    // notprime=0
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        else if (n == 2)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter Your No.: ";
    cin >> n;

    if(isPrime(n))
    {
        cout<<"prime number";
    }
    else{
        cout<<"Not a Prime number";
    }
}
*/

// Pass by Value basic Example
/*
#include <iostream>
using namespace std;

void dummy(int n)
{
    n++;
    cout << " n is " << n << endl;
}

int main()
{
    int n;
    cin >> n;

    dummy(n);

    cout << "number n is " << n << endl;

    return 0;
}
*/

// HOMEWORKS

// AP
/*
#include <iostream>
using namespace std;

int AP(int n)
{
    int ans = (3 * n) + 7;
    return ans;
}

int main()
{
    int n;
    cout << "Enter Your No.: ";
    cin >> n;

    int ans = AP(n);
    cout << "Series is.: " << ans;
    return 0;
}
*/

// Total no. of 1 bits in two no.s

#include <iostream>
using namespace std;

int setbitscount(int n)
{
    int digit = 0;
    while (n != 0)
    {
        if (n & 1 == 1)
        {
            digit++;
        }
        n = (n >> 1);
    }
    return digit;
}

int main()
{
    int n1;
    cout << "Enter Your First No.: ";
    cin >> n1;

    int n2;
    cout << "Enter Your Second No.: ";
    cin >> n2;

    int a = setbitscount(n1);
    int b = setbitscount(n2);

    int ans = a + b;
    cout << "Total no. of 1 bits in both the numbers is " << ans;
    return 0;
}








