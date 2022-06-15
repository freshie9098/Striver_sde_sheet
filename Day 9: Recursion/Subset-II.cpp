class Solution {
    private:
    void f(vector<int>&nums,int i,vector<vector<int>>&ans,vector<int>&a){
       ans.push_back(a);
        if(i==nums.size()){
           // ans.push_back(a);
           return;
       }
        // f(nums,i+1,ans,a);
        for(int j = i;j<nums.size();++j){
            if(j>i&&nums[j]==nums[j-1])continue;
            // f(nums,j+1,ans,a);
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
        // ans.push_back({});
        f(nums,0,ans,a);
        return ans;
        
    }
};
