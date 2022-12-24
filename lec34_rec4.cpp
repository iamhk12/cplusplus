// Reverse of a string using recursion
/*
#include <iostream>
using namespace std;

void reverse(string &s, int i, int j)
{
    // base case
    if (i > j)
        return;

    swap(s[i], s[j]);
    i++;
    j--;

    reverse(s, i, j);
}

int main()
{
    string a = "abcde";
    reverse(a, 0, a.length() - 1);
    cout << "Reverse of string -> " << a << endl;

    string name = "xy";
    reverse(name, 0, name.length() - 1);
    cout << "Reverse of string -> " << name << endl;
}
*/

// check palindrome -1
/*
#include <iostream>
using namespace std;

void reverse(string &s, int i, int j)
{
    // base case
    if (i > j)
        return;

    swap(s[i], s[j]);
    i++;
    j--;

    reverse(s, i, j);
}

bool checkpal(string str)
{
    string s = str;
    reverse(str,0,str.length()-1);

    if(s==str)
    return true;
    else
    return false;


}

int main()
{
    string a = "xyz";
    string b = "abbabba";

    cout<<checkpal(a)<<endl;
    cout<<checkpal(b);



}
*/

//Check plaindrome -2
/*
#include <iostream>
using namespace std;

bool checkpal(string str, int i, int j)
{
    // base case
    if (i > j)
        return true;

    if (str[i] != str[j])
        return false;
    else
    {
        return checkpal(str, i + 1, j - 1);
    }
}

int main()
{
    string a = "xyz";
    string b = "abbabba";
    if (checkpal(a, 0, a.length() - 1))
        cout << a << " is a palindrome" << endl;
    else
        cout << a << " is not a palindrome" << endl;

    if (checkpal(b, 0, b.length() - 1))
        cout << b << " is a palindrome" << endl;
    else
        cout << b << " is not a palindrome" << endl;
}
*/

//a^b
/*
#include<iostream>
using namespace std;
int power(int a,int b)
{

    //base case
    if(b==0)
    return 1;

    if(b==1)
    return a;

    int ans= power(a,b/2);

    if(b%2==0)
    {
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<a<<"^"<<b<<" == "<<power(a,b);
}*/

//BUbble sort 
/*
#include<iostream>
using namespace std;


void printarr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubblesort(int arr[],int size)
{
    if(size==0 || size==1)
    return ;

    for(int i=0;i<size;i++){
    if(arr[i]>arr[i+1])
    swap(arr[i],arr[i+1]);
    }

    //Recursive call
    bubblesort(arr,size-1);

}

int main()
{
    int arr[5] = {6, 2, 4, 8, 10};
    bubblesort(arr, 5);
    printarr(arr,5);

    int a[5] = {7, 1, 4, 3, 9};
    bubblesort(a, 5);
}
*/