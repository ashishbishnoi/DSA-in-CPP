class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> v;
        for (int i=0;i<n;i++){
            v.push_back(vector<int>(i+1,1));
            for(int j=0;j<=i;j++){
                if(j!=0 && j!=i){
                    v[i][j]=v[i-1][j-1]+v[i-1][j];
                }
                

            }
            
        }
        return v;
            
    }
};