#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > A) {

  // Write your code here
vector<int>v = A;
    int n = A.size();
        v[0] = A[0];
        unordered_map<int,int>m;
        int ans = 0;
        m[0] = -1;
        for(int i = 1;i<n;++i){
            v[i] += v[i-1];
        }
        for(int i = 0 ; i < n ;++i){
            if(m.count(v[i])>0){
                ans = max(ans,i-m[v[i]]);
            }
            else{
                m[v[i]] = i;
            }
        }
        return ans;
}
