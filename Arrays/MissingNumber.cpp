class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<bool> flag(n+1,false);
        for(int i=0;i<n;i++){
            flag[nums[i]] = true;
        }
        for(int i=0;i<=n;i++){
            if(flag[i]==false) return i;
        }
        return 2; // TC = O(n), AS = O(n)
    }

    // int missingNumber(vector<int>& nums) {
    //     int n = nums.size();
    //     sort(nums.begin(),nums.end());
    //     for(int i=0;i<n;i++){
    //         if(i != nums[i]) return i;
    //     }
    //     return n; // TC = O(nlogn)
    // }

    // int missingNumber(vector<int>& nums) {
    //     int n = nums.size();
    //     for(int i=0;i<=n;i++){
    //         bool flag = false; 
    //         // false means i isn't present in array
    //         for(int ele : nums){
    //             if(ele == i){
    //                 flag = true;
    //                 break;
    //             }
    //         }
    //         if(flag == false) return i;
    //     }
    //     return 35235; // TC = O(n^2)
    // }
};


// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//        int n=nums.size();
//        int a=0;
//        for(int i=0;i<n;i++){
//             a=a+nums[i];
//        }
//        int sum=(n*(n+1))/2;
//        int missing=sum-a;
//        return missing;
//     return 3546;   
//     }
// };