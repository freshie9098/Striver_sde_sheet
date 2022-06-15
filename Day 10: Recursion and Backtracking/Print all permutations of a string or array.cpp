class Solution {
    private:
    void f(vector<int>&nums,vector<bool>&vis,vector<int>&a,vector<vector<int>>&ans){
        
        if(a.size()==nums.size()){
            ans.push_back(a);
        }
        for(int i = 0;i<nums.size();++i){
            if(!vis[i]){
                vis[i] = 1;
                a.push_back(nums[i]);
                f(nums,vis,a,ans);
                a.pop_back();
                vis[i] = 0;
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>a;
        vector<bool>vis(nums.size(),0);
        f(nums,vis,a,ans);
        return ans;
    }
};
