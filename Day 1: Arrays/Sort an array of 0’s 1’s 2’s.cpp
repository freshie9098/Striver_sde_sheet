void sort012(int *nums, int n)
{
        int i = 0 , j = 0 , k = n -1;
        while(j<=k){
            if(nums[j]==1)j++;
            else if(nums[j]==2){
                swap(nums[j],nums[k--]);
            }
            else{
                swap(nums[j++],nums[i++]);
            }
        }
}
