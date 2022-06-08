#include <bits/stdc++.h> 
int subarraysXor(vector<int> &A, int B)
{
    //    Write your code here.
     unordered_map<int,int>m;
    vector<int>v = A;
    int n = A.size();
    m[0] = 1;
    int cnt = 0;
    for(int i = 0;i<n;++i){
        if(i>0){
            v[i]^=v[i-1];
        }
        
        cnt+=m[v[i]^B];
        m[v[i]]++;
    }
    return cnt;
}
