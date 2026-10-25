class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        int profit=0,min=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]<min){
                min=arr[i];
            }
            else {
                profit=max(profit,arr[i]-min);
            }
        }
        return profit;
    }
};