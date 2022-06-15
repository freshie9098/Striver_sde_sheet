class Solution {
    private:
    void f(vector<int>&nums,int i,vector<vector<int>>&ans,vector<int>&a){
       ans.push_back(a);
        for(int j = i;j<nums.size();++j){
            if(j>i&&nums[j]==nums[j-1])continue;
            a.push_back(nums[j]);
           
            f(nums,j+1,ans,a);
            a.pop_back();
        }
        
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>a;
        f(nums,0,ans,a);
        return ans;
        
    }
};
