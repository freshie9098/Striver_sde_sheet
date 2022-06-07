#include <bits/stdc++.h> 
int findMajorityElement(int nums[], int n) {
	// Write your code here.
//      int n = nums.size();
        int cnt = 1,major = nums[0];
        for(int i = 1;i<n;++i){
            if(nums[i]==major){
                cnt++;
            }
            else{
                cnt--;
            }
            if(cnt==0){
                major = nums[i];
                cnt = 1;
            }
        }
    cnt = 0;
    for(int i = 0 ;i<n;++i){
        if(nums[i]==major)cnt++;
    }
    if(cnt>n/2)return major;
        return -1;
}
