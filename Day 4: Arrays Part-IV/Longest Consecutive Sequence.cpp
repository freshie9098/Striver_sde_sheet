class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int>m;
        int n = nums.size();
        int ans = 0;
        for(int i = 0 ; i < n ;++i){
           if(m[nums[i]]>0)continue;
            m[nums[i]]++;
            int left = m[nums[i]-1];
            int right = m[nums[i]+1];
            int sum = left+right+1;
            m[nums[i]-left] = sum;
            m[nums[i]+right] = sum;
                ans = max(ans,sum);
            
        }
        return ans;
    }
};
