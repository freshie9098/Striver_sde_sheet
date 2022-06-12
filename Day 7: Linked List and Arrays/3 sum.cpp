#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>nums, int n, int k) {
	// Write your code here.
     vector<vector<int>>v;
//         int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n-2;++i){
            if(i-1>=0 && nums[i]==nums[i-1])continue;
            int lo = i+1;
            int hi = n-1;
            int target = k-nums[i];
            while(lo<hi){
                long sum = nums[lo]+nums[hi];
                if(sum==target){
                    v.push_back({nums[i],nums[lo],nums[hi]});
                    
                    while(lo<hi && nums[lo]==nums[lo+1]){
                        lo++;
                    }
                    while(lo<hi && nums[hi] ==nums[hi-1]){
                        hi--;
                    }
                    lo++;hi--;
                 
                }
                else if(sum<target){
                    lo++;
                }
                else{
                    hi--;
                }
            }
        }
             
        return v;
}
