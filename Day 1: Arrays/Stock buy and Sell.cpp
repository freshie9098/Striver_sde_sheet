#include <bits/stdc++.h> 
int maximumProfit(vector<int> &nums){
    // Write your code here.
      int n = nums.size();
        int i = 0,ans = 0,mini = nums[0];
        while(i<n){
            ans = max(ans,nums[i]-mini);
            if(nums[i]<mini){
                mini = nums[i];
            }
            i++;
        }
        return ans;
}
