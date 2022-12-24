#include<iostream>
using namespace  std;

int main()
{
    int n;
    cout<<"Enter rows: "; //n==rows
    cin>>n;

    int m;
    cout<<"Enter columns: "; //m==columns
    cin>>m;


    int **arr = new int*[n];

    for(int i=0;i<n;i++)
    {
        arr[i]=new int[m];
    }


    for(int i =0 ; i<n ;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];

        }
    }
    cout<<endl;

    for(int i =0 ; i<n ;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<' ';
            
        }
        cout<<endl;
    }

    //releasing memory
    for(int i=0;i<n;i++)
    delete []arr[i];

    
    delete []arr;
}