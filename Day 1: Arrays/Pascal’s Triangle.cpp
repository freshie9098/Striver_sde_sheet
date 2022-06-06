#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
     vector<vector<long long int>>v;
        
        for(long long int i = 0;i<n;i++){
            vector<long long int>a(i+1,1);
            for(long long int j = 1;j<=i-1;j++){
                a[j] = v[i-1][j] + v[i-1][j-1];
            }
            v.push_back(a);
        }
    return v;
}
