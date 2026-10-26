class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n= mat.size();
        for(int p=0;p<4;p++){
            for(int i=0;i<n;i++){
                for(int j=0;j<=i;j++) {
                    if(i!=j) swap(mat[i][j],mat[j][i]);
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n/2;j++) {
                    swap(mat[i][j],mat[i][n-1-j]);
                }
            }
            int count=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(mat[i][j]==target[i][j]) count ++;
                }
            }
            if(count==(n*n)) return true;
            else continue;
        }
        return false;
    }
};