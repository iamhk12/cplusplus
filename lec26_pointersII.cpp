// PLAYING
/*
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {23, 122, 41,67};
    cout << "-> Address of first memory block is " << arr << endl; // First location
    cout << "-> ARR[0] " << arr[0] << endl;
    cout << "-> Address of first memory block is " << &arr[0] << endl;
    cout << "-> ARR[0] " << arr[0] << endl;
    cout << "-> *ARR " << *arr << endl;
    cout << "-> *ARR + 1 ::" << *arr + 1 << endl;
    cout << "-> *(ARR + 1) ::" << *(arr + 1) << endl;
    cout << "-> *(ARR)+1 ::" << *(arr) + 1 << endl;
    cout<<"ARR[2]"<<arr[2]<<endl;
    cout<<"*(ARR + 2) "<<*(arr+2)<<endl;

    int i=3;
    cout<<i[arr]<<endl;

    cout << endl;
    return 0;
}
*/

// Diff. between array/pointers
/*
#include <iostream>
using namespace std;

int main()
{

    int temp[10] = {0};
    cout << sizeof(temp) << endl;
    cout << "Sizeof(*temp)::  " << sizeof(*temp) << endl;
    cout << "Sizeof(&temp)::  " << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;

    int a[20] = {1, 2, 3, 5};
    cout << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;

    int arr[10];
    // Error
    // arr=arr+1;

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1; // NO ERROR
    cout << ptr << endl;

    return 0;
}
*/

// Char arrays
/*
#include <iostream>
using namespace std;

int main()
{
    // int arr[5]={1,2,3,4,5};
    // char ch[6]="abcde";

    // cout<<arr<<endl;
    // cout<<ch<<endl;

    // char *c=&c[0];
    // cout<<c<<endl;

    char temp = 'z';
    char *p = &temp;
    cout << p << endl;

    return 0;
}
*/

// Pointer & Functions
#include <iostream>
using namespace std;

void printptr(int *p)
{
    cout << *p << endl;
}

void update(int *p)
{
   // p = p + 1;

    // cout << "inside " << p << endl;

    *p = *p + 1;
}

int getsum(int *arr,int n)     //BTS -->  arr[] nahi aata instead ek pointer *arr paas ho raha hy
{
    cout<<"Size of arr :: "<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
return sum;
}

int main()
{
    /*
    int value = 5;
    int *p = &value;

    printptr(p);

    cout << "Before " << p << endl;
    cout << "Before *p == " << *p << endl;
    update(p);
    cout << "After " << p << endl;
    cout << "after *p== " << *p << endl;
*/
    int arr[6]={1,2,3,4,5,8};

    cout<<"Sum of arr is "<<getsum(arr+3,3);



}