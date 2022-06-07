#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
int i1 = 0,j1 = 0,i2 = n-1,j2 = m-1;
    while(i1<n/2 && j2>=m/2 && i1<i2 && j1<j2){
        int lst = mat[i1+1][j1];
        for(int j = j1;j<j2;++j){
            swap(mat[i1][j],lst);
        }
        
        for(int i = i1;i<i2;++i){
            swap(mat[i][j2],lst);
        }
        for(int j = j2;j>j1;--j){
            swap(mat[i2][j],lst);
        }
        for(int i = i2;i>i1;--i){
            swap(mat[i][j1],lst);
        }
        i1++;j1++;i2--;j2--;
    }
 
}
