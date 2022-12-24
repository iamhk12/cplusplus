// Prime or not

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int i = 2;
	while (i < n)
	{
		if (n % i == 0)
		{
			cout<<"not a prime number";
			break;
		}
		else
		{
			cout<<"Prime No.";
			break;
		}
		i=i+1;
	}
return 0;
}