// Swap Alternate
/*
#include <iostream>
using namespace std;

void swapalt(int arr[],int size)
{
    for (int i=0;i<size;i+=2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

void printarr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main()
{
    int even[8]={5,2,9,4,7,6,2,0};
    int odd[5]={11,33,9,76,43};

    swapalt(even,8);
    printarr(even,8);


    cout<<endl;

    swapalt(odd,5);
    printarr(odd,5);

}
*/

// Swapping without swap() function
/*
#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int temp;

    temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;

    cout<<arr[0]<<" "<<arr[1];

}
*/

// Find unique element
// Array of size n is given
/*Q::

n=2m+1
M nos. do baar hy and a single no. come 3 times
*/
// HINT;; XOR a^a=0
/*
#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {2, 3, 199, 6, 3, 6, 2};
    int size = 7;
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans;
}
*/

// Leet code-->
/* Array of integers is given.
return true if the number of occurences of each value in the array is unique
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int ar1[6] = {1, 2, 1, 2, 3, 3, 3};
    int ar2[2] = {1, 2};

//INCOMPLETE



    if ()
    {
        cout << "True";
    }
    else
    {
        cout<<"False";
    }
}
*/

// Find duplicates
/* ek array mei....ek single integer hy jo do baar hy
Dhundke batao*/

/*

#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 3, 2, 4, 3};
    int ans=0;

    for(int i=0;i<5;i++)
    {
        ans=ans^a[i];
    }

for(int i=1;i<5;i++)
{
    ans=ans^i;
}

cout<<ans;
}
*/

// INTERSECTION OF ARRAYS
/*
#include <iostream>
#include <climits>
using namespace std;

int main() // ISS PROGRAM MEI 'TLE' LAGEGA
{
    int a[4] = {1, 2, 3, 4};
    int b[3] = {99, 4, 3};

    int n = 4;
    int m = 3;

    for (int i = 0; i < n; i++)
    {
        int element = a[i];
        for (int j = 0; j < m; j++)
        {
            if (element == b[j])
            {
                cout << element << endl;
                b[j] = INT_MIN;
                break;
            }
        }
    }
}
*/

// optimisation

/*

int i = 0, j = 0;
while (i < n && j < m)
{
    if (arr1[i] == arr2[j])
    {
        cout<<arr[i];//ans was not declared
        i++;
        j++;
    }
    else if(arr1[i],arr2[j])
    {
        i++;
    }
    else
    {
j++;
    }
}

*/

// Pair sum
/*
Q::
e.g
i/p::{1,2,3,4,5}
sum =5
o/p:
1 4
2 3
Print pairs
*/
/*
#include <iostream>
using namespace std;

int main()
{

    int sum = 5;
    int a[5] = {1, 2, 3, 4, 5};
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] + a[j] == sum)
            {
                cout << a[i] << " " << a[j] << endl;
            }
        }
    }

}
*/
// triplets sum
/*
#include <iostream>
using namespace std;

int main()
{

    int sum = 12;
    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)

                if (a[i] + a[j] + a[k] == sum)
                {
                    cout << a[i] << " " << a[j] << " " << a[k] << endl;
                }
        }
    }
}
*/

// Sort 0,1
/*
i/p:: arr[]={0,1,0,1,1,0,1}          //Saare zeros ek taraf aur ones ek taraf
o/p:: arr[]{0,0,0,1,1,1,1}
*/

#include <iostream>
using namespace std;

void printarr(int arr[], int n)
{
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
}

void sort0_1(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while (arr[right] == 1 && left < right)
        {
            right--;
        }
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
    printarr(arr, 6);
}

int main()
{
    int arr[6] = {0, 1, 0, 1, 0, 1};

    sort0_1(arr, 6);
    
}