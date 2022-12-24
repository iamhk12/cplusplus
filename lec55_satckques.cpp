//String reverse using stack

#include<iostream>
#include<stack>
using namespace std;

string reverseString(string s){
    stack <char> stack;
    for(int i=0;i<s.length();i++){
        stack.push(s[i]);
    }
    string ans="";
    while(!stack.empty()){
        ans.push_back(stack.top());
        stack.pop();
    }
    return ans;
        
}

int main()
{
    string x;
    cin>>x;
    cout<<reverseString(x);
    
    return 0;
}
