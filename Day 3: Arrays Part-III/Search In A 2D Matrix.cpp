#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & grid, int m, int n, int target) {
    // Write your code here.
     
//         int m = grid.size(),n = grid[0].size();
       int l = 0,h = m*n-1;
        while(l<=h){
            int mid = (l+h)>>1;
            int i = mid/n,j = mid%n;
            
            if(grid[i][j]==target)return 1;
            if(grid[i][j]<target){
                l = mid+1;
            }
            else{
                h = mid-1;
            }
            
        }
        return 0;
}
