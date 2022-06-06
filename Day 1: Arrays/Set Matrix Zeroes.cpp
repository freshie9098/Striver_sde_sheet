

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = 0,c = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0 ; i < m ;++i){
            for(int j = 0 ; j < n ;++j){
                if(i==0&&matrix[i][j]==0){
                    r = 1;
                }
                 if(j==0&&matrix[i][j]==0){
                    c = 1;
                }
                if(i>0&&j>0&&matrix[i][j]==0){
                    matrix[i][0] = 0 ;
                    matrix[0][j] = 0;
                }
                
            }
        }
        
         for(int i = 0 ; i < m ;++i){
            for(int j = 0 ; j < n ;++j){
                // cout<<matrix[i][j]<<" ";
            }
         // cout<<endl;
         }
            
            for(int i = 1 ; i < m ;++i){
            for(int j = 1 ; j < n ;++j){
                if(matrix[i][0]==0||matrix[0][j]==0){
                    matrix[i][j] = 0;
                }
            }
        }
            if(r==1){
                for(int j = 0 ; j < n ;++j){
                    matrix[0][j] = 0;
                }
            }
            if(c==1){
                for(int i = 0 ; i < m ;++i){
                    matrix[i][0] = 0;
                }
            }
        
        
    }
};
