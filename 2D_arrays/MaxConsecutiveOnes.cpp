class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,n=nums.size();
        vector<int> arr;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
                if(i==n-1) arr.push_back(count);
            }
            else if(nums[i]==0){
                arr.push_back(count);
                count=0;
            }
        }
        int max=INT_MIN;
        int m=arr.size();
        for(int i=0;i<m;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
        
    }
};