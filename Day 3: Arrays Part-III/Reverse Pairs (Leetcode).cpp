#include <bits/stdc++.h> 
int merge(vector<int>&nums,long arr[],int lo,int mid,int hi){
        int i = lo;
        int j = mid;
        int k = lo;
        int inv = 0;
        while(i<mid && j<=hi){
            if(nums[i]>long(2*long(nums[j]))){
                inv+=mid-i; 
                j++;
            }
            else{
                i++;      
            }
            
        }
        i = lo, j =mid;
          while(i<mid && j<=hi){
              if(nums[i]<=nums[j]){
                  arr[k++] = nums[i++];
              }
              else{
                  arr[k++] = nums[j++];
              }
          }
        while(i<mid){
            arr[k++] = nums[i++];
        }
        while(j<=hi){
            arr[k++] = nums[j++];
        }
        for(i = lo;i<=hi;++i){
            nums[i] = arr[i];
        }
        return inv;
    }
    int merge_sort(vector<int>&nums,long arr[],int lo,int hi){
        int inv = 0;
        if(lo<hi){
            int mid = (lo+hi)/2;
            inv+=merge_sort(nums,arr,lo,mid);
            inv+=merge_sort(nums,arr,mid+1,hi);
            
            inv+=merge(nums,arr,lo,mid+1,hi);
        }
        return inv;
    }


int reversePairs(vector<int> &nums, int n){
	// Write your code here.	
//       int n = nums.size();
        long arr[n];
    
     return merge_sort(nums,arr,0,n-1);   
}
