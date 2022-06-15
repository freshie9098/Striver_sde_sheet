class Solution {
    private:
    vector<vector<int>>ans;
    void f(vector<int>&nums,int i,int target,vector<int>&a){
        if(target==0){
            ans.push_back(a);
            return;
        }
        if(i==nums.size())return;
        
        for(int j = i;j<nums.size();++j){
            if(nums[j]>target)return;
            if(j>i && nums[j]==nums[j-1])continue;
            a.push_back(nums[j]);
            f(nums,j+1,target-nums[j],a);
            a.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<int>a;
        sort(nums.begin(),nums.end());
        f(nums,0,target,a);
        return ans;
    }
};
