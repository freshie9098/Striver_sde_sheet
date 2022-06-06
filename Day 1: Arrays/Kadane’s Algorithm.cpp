long long maxSubarraySum(int nums[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long s = 0,ans = nums[0];
    for(long long i = 0 ; i < n ;++i){
        s+=nums[i];
        if(s<0){
          
            s = 0;
              ans = max(ans,s);
        }
        else{
            ans = max(ans,s);
        }
    }
    return ans;
}
