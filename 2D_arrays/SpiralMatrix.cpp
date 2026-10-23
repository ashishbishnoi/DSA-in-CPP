// spiral matrix leetcode 54
// TC O(mn)



class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        vector<int> arr;
        int m=a.size(),n=a[0].size();
        int minr=0,minc=0,maxr=m-1,maxc=n-1;
        while(minr<=maxr && minc<=maxc){
            for(int j=minc;j<=maxc;j++){
                arr.push_back(a[minr][j]);
                
            }
            minr++;
            if(minr>maxr || minc>maxc) break;
            for(int i=minr;i<=maxr;i++){
                arr.push_back(a[i][maxc]);
               
            }
            maxc--;
            if(minr>maxr || minc>maxc) break;
            for(int j=maxc;j>=minc;j--){
                arr.push_back(a[maxr][j]);
                
            }
            maxr--;
            if(minr>maxr || minc>maxc) break;
            for(int i=maxr;i>=minr;i--){
                arr.push_back(a[i][minc]);
                
            }
            minc++;
            
            
        }
        return arr;

    }
};