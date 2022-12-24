
//{ Driver Code Starts
//Initial template for C++
/*
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    private:
    
    bool knows(vector<vector<int> >& M,int a,int b){
        
        if(M[a][b]==1)
        return true;
        else
        return false;
    }
    
    
    
    public:
    //step.1:
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>s;
        for(int i=0;i<n;i++)
        {
            s.push(i);
        }
    
    //step.2: 
    while(s.size()>1){
        
        int a=s.top();
        s.pop();
        
        int b=s.top();
        s.pop();
        
        if(knows(M,a,b))
        s.push(b);
        else
        s.push(a);
    }
    int candidate = s.top();
    //single element in stack is a potential celebrity
    
    int zerocount=0;
    for(int i=0;i<n;i++){
        if(M[candidate][i]== 0 )
        zerocount++;
    }
    if(zerocount!=n)
    return -1;
    
    
    int onecount=0;
    for(int i=0;i<n;i++){
        if(M[i][candidate]== 1 )
        onecount++;
    }
    
    if(onecount!=n-1)
    return -1;

return candidate;
    
  }

};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends
*/


//{ Driver Code Starts
/*
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

class Solution{
    private:
    
    vector<int> nextsmallelement(int arr[],int n){
        
    stack<int>s;
    s.push(-1);
    vector <int>ans (n);
    
    for(int i=n-1;i>=0;i--){
        int curr=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr)
        {
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
    }
        
    vector<int> prevsmallelement(int arr[],int n){
    stack<int>s;
    s.push(-1);
    vector <int>ans (n);
    
    for(int i=0;i<n;i++){
        int curr=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr)
        {
            s.pop();
        }
        
        ans[i]=s.top();
        s.push(i);    
    }
    return ans;
}    
    int largestRectangleArea(int arr[],int size) {
        
        int n = size;
        
        vector<int> next(n);
        next = nextsmallelement(arr,n);
        
        vector<int> prev(n);
        prev = prevsmallelement(arr,n);
        
        int area = INT_MIN;
        for(int i=0;i<n;i++){
            int length = arr[i];
            if(next[i]==-1){
                next[i]=n;
            }
            int width = next[i] - prev[i] - 1;
            int newarea = length*width;
            area = max(area,newarea);
        }
        
        return area;
        
        
    }
    
    
    
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        
        //compute area for first row
        int area = largestRectangleArea(M[0],m);
        
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                
                //row update
                if(M[i][j]!=0)
                M[i][j]= M[i][j]+M[i-1][j];
                else
                M[i][j]=0;
            }
        area = max(area,largestRectangleArea(M[i],m));
        }
        return area;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends
*/




