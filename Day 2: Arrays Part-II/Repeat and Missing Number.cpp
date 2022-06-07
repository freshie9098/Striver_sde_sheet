#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &nums, int n)
{
	// Write your code here 
	int a = 0;//repeat
    int b =  0;//missing
    int x = 0;
    for(int i = 0 ; i < n ;++i){
        x^=nums[i];
    }
    for(int i = 1;i<=n ; ++i){
        x^=i;
    }
    int lst_set_bit_no = x&~(x-1);
    for(int i = 0 ; i < n ;++i){
        if(lst_set_bit_no&nums[i]){
            a^=nums[i];
        }
        else{
            b^=nums[i];
        }
    }
    for(int i = 1;i<=n;++i){
        if(lst_set_bit_no&i){
            a^=i;
        }
        else{
            b^=i;
        }
    }
    int cnt = 0;
    for(int i = 0 ; i < n ; ++i){
        if(nums[i]==a){
            cnt++;
        }
    }
    if(cnt==0){
        return {a,b};
    }
    return {b,a};
}
