#include <bits/stdc++.h> 
long long merge(long long *arr,long long temp[],int low,int mid,int high){
    int i = low;
    int j = mid;
    int  k = low;
    long long inv = 0;
    while(i<mid && j<=high){
        if(arr[i]<=arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            inv+=mid-i;
            temp[k++] = arr[j++];
        }
    }
    while(i<mid){
         temp[k++] = arr[i++];
    }
     while(j<=high){
         temp[k++] = arr[j++];
     }
    for(i = low;i<=high;++i){
        arr[i] = temp[i];
    }
    return inv;
}
long long merge_sort(long long *arr,long long temp[],int low,int high){
    long long inv = 0;
    if(low<high){
        int mid = (low+high)>>1;
        inv+=merge_sort(arr,temp,low,mid);
        inv+=merge_sort(arr,temp,mid+1,high);
        
        inv+=merge(arr,temp,low,mid+1,high);
    }
    return inv;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long temp[n];
    return merge_sort(arr,temp,0,n-1);
}
