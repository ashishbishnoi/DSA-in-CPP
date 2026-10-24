class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
    int i=0,j,a;
    int n=arr.size();
    for(;i<n;i++){
        a=arr[i];
        for(j=i+1;j<n;j++){
            if(a+arr[j]==target){
                return {i,j};
            }
        }
    }
    return{};
}
};