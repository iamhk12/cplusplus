// Reverse an array
/*
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>v)
{

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;

    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}
int main()
{
    vector<int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    cout<<"Array before reverse: "<< endl;
    print(v);


    vector<int> ans = reverse(v);

    cout<<"Array after reverse: "<<endl;
    print(ans);
}
*/

// Reverse an array after m
/*
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>v)
{

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

vector<int> reverse(vector<int> v,int m)
{
    int s = m+1;
    int e = v.size() - 1;

    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}
int main()
{
    vector<int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    cout<<"Array before reverse: "<< endl;
    print(v);
    int m;
    cout<<"enter Index m :-";
    cin>>m;

    vector<int> ans = reverse(v,m);

    cout<<"Array after reverse: "<<endl;
    print(ans);
}
*/

// Merge to sorted arrays
/*
#include <iostream>
#include <vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{

    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    // copy first array k element ko
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    // copy kardo second array k remaining element ko
    while (j < m)
    {
        arr2[k++] = arr2[j++];
    }
}

void print(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};

    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);

    print(arr3, 8);

    return 0;
}
*/
// Move zeroes

#include <iostream>
#include <vector>
using namespace std;

void printarr(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

void move0s(int arr[], int n)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    printarr(arr,n);
}

int main()
{
    int arr[6] = {2, 0, 1, 3, 0, 0};
    move0s(arr, 6);

    int b[9] = {1, 0, 3, 0, 5, 0, 5, 9, 10};
    move0s(b, 9);
}