#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    if(x==1)return 1;
    long long int ans = 1;
    long long int t = x;
    long long int n1 = n,mod = m;
    while(n1){
        if(n1&1){
            ans = ((ans%mod)*(t%mod))%mod;
            n1--;
        }
        else{
            t = ((t%mod)*(t%mod))%mod;
            n1/=2;
        }
    }
    return int(ans);
  
}
