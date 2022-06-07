#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
    int t = m+n-2;
    //m+n-2cm-1||||||m+n-2cn-1
    double d = 1;
    int r = m-1;//or n-1;
   for(int i = 1;i<=r;++i,--t){
       d = d*t/i;
   }
    return int(d);
}
