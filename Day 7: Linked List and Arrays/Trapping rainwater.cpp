class Solution {
    // int max(int a,int b){
    //     if(a>b)return a;
    //     return b;
    // }
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n<2)return 0;
// int n = 0;
        int l = 0,r=n-1,lmax = 0,rmax = 0,ans = 0;
        while(l<=r){
            if(lmax<=rmax){
                if(height[l]<=lmax){
                    ans += lmax-height[l];
                }
                else{
                    lmax = height[l];
                }
                l++;
            }
            else{
                //rmax<lmax
                if(height[r]<=rmax){
                    ans+= rmax -height[r];
                }
                else{
                    rmax = height[r];
                }
                r--;
            }
        }
        return ans;
    }
};
