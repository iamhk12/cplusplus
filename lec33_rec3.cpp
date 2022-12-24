// check array is sorted or not using recursion

#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    // base case
    if (size == 0 || size == 1)
        return true;

    else if (arr[0] > arr[1])
        return false;

    else
    {
        bool ans = isSorted(arr + 1, size - 1);
        return ans;
    }
}

int main()
{
    int arr[5] = {2, 3, 6, 8, 9};
    if (isSorted(arr, 5))
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";
}

// HW
// Sum of array using recursion
/*
#include <iostream>
using namespace std;

int sumofarray(int *arr, int size)
{
    // base case
    if (size == 0)
        return 0;

    else
    {
        int x = arr[0] + sumofarray(arr + 1, size - 1);
        return x;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int ans = sumofarray(arr, 5);
    cout << "Sum of array is " << ans << endl;

    return 0;
}
*/

// Linear search
/*
#include <iostream>
using namespace std;

bool linearsearch(int arr[], int size, int key)
{
    // base case
    if (size == 0)
        return 0;

    else if (arr[0] == key)
        return 1;

    else
        return linearsearch(arr + 1, size - 1, key);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 12};

    linearsearch(arr, 5, 12);

    if (linearsearch)
        cout << "Element is present." << endl;
    else
        cout << "Element is not present" << endl;
}
*/
// Binary search using recursion
/*
#include <iostream>
using namespace std;

void printarr(int arr[], int start, int end)
{
    for (int i = start; i < end; i++)
    {
        cout << arr[i] << " ";
    }
}
bool Binarysearch(int arr[], int start, int end, int key)
{
    cout << "ARRAY:: ";
    printarr(arr, start, end);
    cout << endl;
    // base case
    if (start > end)
        return 0;

    int mid = start + (end - start) / 2;
    cout << "MID :: " << mid << endl;
    cout << "ARR[MID]:: " << arr[mid] << endl
         << endl;
    if (arr[mid] == key)
        return 1;

    if (arr[mid] < key)
        return Binarysearch(arr, mid + 1, end, key);

    if (arr[mid] > key)
        return Binarysearch(arr, start, mid - 1, key);

    else
        return 0;
}

int main()
{
    int arr[5] = {2, 4, 6, 10, 16};
    int key = 16;
    bool x = Binarysearch(arr, 0, 5, key);

    if (x)
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}
*/
