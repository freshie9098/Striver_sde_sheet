class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return nums[0];
        int lo = 0,hi = n-1;
        while(lo<=hi){
            int mid = (lo+hi)>>1;
            
            if(((mid&1)&&nums[mid]==nums[mid-1])||(mid%2==0&&nums[mid]==nums[mid+1])){
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
        }
        return nums[lo];
    }
};
