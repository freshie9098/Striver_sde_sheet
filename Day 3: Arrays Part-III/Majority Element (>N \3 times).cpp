#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &nums)
{
    // Write your code here.
      int n1 = -1,n2 = -1,cnt1 = 0,cnt2 = 0,n = nums.size();
        for(int i= 0 ; i < nums.size();++i){
            if(nums[i]==n1)cnt1++;
            else if(nums[i]==n2)cnt2++;
            else if(cnt1==0){
                n1 = nums[i];cnt1++;
            }
            else if(cnt2==0){
                n2 = nums[i];cnt2++;
            }
            else{
                cnt1--;cnt2--;
            }
        }
        int k1 = 0,k2 = 0;
        for(int i = 0 ; i < n;++i){
            if(nums[i]==n1)k1++;
            else if(nums[i]==n2)k2++;
        }
        vector<int>a;
        if(k1>n/3){
            a.emplace_back(n1);
        }
        if(k2>n/3){
            a.emplace_back(n2);
        }
        return a;

}
