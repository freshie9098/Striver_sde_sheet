#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
    //  Write your code here.
 int i = n-2;
    while(i>=0 && nums[i]>=nums[i+1]){
        i--;
    }
     reverse(nums.begin()+i+1,nums.end());
    if(i==-1){
       return nums;
    }
   
    int ind = upper_bound(nums.begin()+i+1,nums.end(),nums[i])-nums.begin();
    swap(nums[i],nums[ind]);
    return nums;
}
