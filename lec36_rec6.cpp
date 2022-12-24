//Quick sort
#include<bits/stdc++.h>
using namespace std;


void printarr(int arr[], int s, int e)
{

    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[],int s,int e)
{
    int pivot=arr[s];

    int count =0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<pivot) 
        count++;
    }

    int pivotindex= s + count;
    swap(arr[pivotindex],arr[s]);

    //left and right wala part sambhaal lete hy
    int i =s,j=e;

    while(i<pivotindex && j>pivotindex)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }

        if(i<pivotindex && j>pivotindex)
        {
            swap(arr[i++],arr[j--]);
        }

    }
    return pivotindex;
}

void quicksort(int arr[],int s,int e)
{
    //base case
    if(s>e)
     return ;

    //partition karenge
    int p = partition(arr,s,e);

    //left part sort
    quicksort(arr,s,p-1);

    //right part
    quicksort(arr,p+1,e); 
}

int main()
{
    int arr[5]={2,4,1,6,9};
    int n=5;
    int arr2[6]={3,1,4,5,2,0};
    int x=6;    

    quicksort(arr,0,n-1);
    printarr(arr,0,n-1);

    quicksort(arr2,0,x-1);
    printarr(arr2,0,x-1);
}