// Find Pivot in an array
/*
#include <iostream>
using namespace std;

int getpivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int arr[5] = {6, 10, 17, 1, 3};
    cout << "Pivot is " << getpivot(arr, 5) << endl;
    cout<<arr[getpivot(arr, 5)];
}
*/

// Search in rotated and sort array
/*
#include <iostream>
using namespace std;

int getpivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarysearch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = (start + end) / 2; // Ek galti hy
                                 // mid = start + (end -start )/2
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // Go to right wala
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else // Go to left wala
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    int n = 5;
    int pivot = getpivot(arr, n);
    int k = 2;
    if (k >= arr[pivot] && arr[pivot] <= arr[5 - 1])
    {
        cout << arr[binarysearch(arr, pivot, n - 1, k)]<<"     index is ::"<<binarysearch(arr, pivot, n - 1, k);
    }
    else{
        cout<<arr[binarysearch(arr,0,pivot-1,k)]<<"     index is ::"<<binarysearch(arr,0,pivot-1,k);
    }
}
*/
// Square root through B.S

#include <iostream>
using namespace std;

int binarysearch(long long int arr[], int n, long long int k)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] * arr[mid] == k)
        {
            return arr[mid];
        }
        else if (arr[mid] * arr[mid] < k)
        {
            ans = arr[mid];
            s = mid + 1;
        }
        else if (arr[mid] * arr[mid] > k)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int bssqrt(long long int n)
{
    long long int arr[n - 1];

    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    int sqrt = binarysearch(arr, n, n);
    return sqrt;
}

double precision(int n, int digit, int intsol)
{
    double ans=intsol;
    double factor = 1;
    for (int i = 0; i < digit; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j=j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    long long int n;
    cin >> n;
    int intsqn = bssqrt(n);
    cout << "Integer Square root of " << n << " is :" << intsqn << endl;

    cout << "More precised solution is " << precision(n,3,intsqn);
}
