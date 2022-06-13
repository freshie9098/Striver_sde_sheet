class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0,last = nums[0];
        while(j<n){
            
            while(j<n && nums[j] == last){
                j++;
            }
            if(j==n){
                return i+1;
            }
            nums[i+1] = nums[j];
            i++;
            last = nums[j];
        }
        return i+1;
    }
};
