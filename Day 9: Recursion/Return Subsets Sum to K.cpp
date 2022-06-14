#include<bits/stdc++.h> 
void f(vector<int>&nums,int i,int sum,int target,vector<vector<int>>&ans,vector<int>a){
 if(i==nums.size()){
     if(sum==target){
         ans.push_back(a);
     }
     return;
 }   
    //np
    f(nums,i+1,sum,target,ans,a);
    //pick
    a.push_back(nums[i]);
    f(nums,i+1,sum+nums[i],target,ans,a);
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
//     return combinationSum(arr,k);
    vector<vector<int>>ans;
    f(arr,0,0,k,ans,{});
    return ans;
}
