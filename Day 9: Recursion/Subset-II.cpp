#include<bits/stdc++.h>

void f(vector<int>&nums,int i,map<vector<int>,int>&m,vector<vector<int>>&ans,vector<int>a){
        if(i==nums.size()){
            if(m.count(a)==0){
                ans.push_back(a);
                m[a]++;
            }
            return ;
        }
        //npick
        f(nums,i+1,m,ans,a);
        //pick
        a.push_back(nums[i]);
        f(nums,i+1,m,ans,a);
        
    }
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        map<vector<int>,int>m;
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        f(nums,0,m,ans,{});
    sort(ans.begin(),ans.end());
        return ans;
        
    }
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    return subsetsWithDup(arr);
}
