class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int i=0,j=0,m=matrix.size(),n=matrix[0].size();
        while(i<m && j<n){
            if(matrix[i][j]==0){
                for(int k=0;k<n;k++){
                    matrix[i][k]=0;
                }
                for(int l=0;l<m;l++){
                    matrix[l][j]=0;
                }
            }
            if(j<n-1){ 
                j++;
            } 
            else if(j==n-1 && i<m-1){
                j=0;
                i++;
            }
            if(i==m-1 && j==n-1) break;
            
        }
    }
};  
// My code But here the problem is the original zero and th ezeros ive set are not uniquely identified
// so it's leading to a wrong answer.


// TC=O(mn)
// approach : First i saved the values of i and j where it is zero in matrix. then again i transversed
// and set the values zero for all i and j.
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<int> arr;
        vector<int> arr2;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    arr.push_back(i);
                    arr2.push_back(j);
                }
            }
        }
        for(int k=0;k<arr.size();k++){
            for(int i=0;i<n;i++){
                matrix[arr[k]][i]=0;
            }
        }
        for(int l=0;l<arr2.size();l++){
            for(int i=0;i<m;i++){
                matrix[i][arr2[l]]=0;
            }
        }
    }
};

// Now this code overcomes the problems arised in my first code.
