class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = nums[0],ans = 0;
        int i1 = -1,int j1 = -1;
        for(int i = 1;i<nums.size();++i){
            nums[i]+=nums[i-1];
            if(nums[i]){
                cnt++;
                ans = max(ans,i-j+1);
            }
            else{
                cnt = 0;
            }
        }
        return ans;
    }
};
