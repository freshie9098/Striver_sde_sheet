#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    map<int,int>m;
    vector<vector<int>>v;
    for(int i = 0 ; i < arr.size();++i){
        if(m.count(s-arr[i])>0){
            int t = min(arr[i],s-arr[i]);
            int t1 = max(arr[i],s-arr[i]);
            int f = m[s-arr[i]];
            
            while(f--){
                v.push_back({t,t1});
            }
        }
        m[arr[i]]++;
    }
    sort(v.begin(),v.end());
    return v;
}
