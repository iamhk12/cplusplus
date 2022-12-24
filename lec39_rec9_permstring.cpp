
#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums, int index, vector<vector<int>> &ans)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[index], nums[j]);
        solve(nums, index + 1, ans);
        // backtrack
        swap(nums[index], nums[j]);
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, index, ans);

    return ans;
}

int main()
{
    vector<int> a = {1,2,3};
    vector<vector<int>> answer = permute(a);
    for(int i=0;i< answer.size();i++)
    {
        for(int j=0;j<answer[i].size();j++)
        {
        cout<<answer[i][j]<<"";
        }
        cout<<"  ";
    }
    

}