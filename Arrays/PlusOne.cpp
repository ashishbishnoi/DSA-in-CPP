class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        vector<int> ans;
        for(int i=digits.size()-1;i>=0;i--){
            int sum = digits[i] + carry;
            if(sum<10){
                carry = 0;
                ans.push_back(sum);
            }
            else{
                carry = 1;
                ans.push_back(0);
            }
        }
        if(carry == 1) ans.push_back(1);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};




// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int n=digits.size();
//         if(digits[n-1]==9){
//             int count=0;
//             for(int i=0;i<n;i++){
//                 if(digits[i]==9) count++;
//             } 
//             if (count==n){
//                 digits[0]=1;
//                 for(int i=1;i<n;i++){
//                     digits[i]=0;
//                 }
//                 digits.push_back(0);
//                 return digits;
//             }
//             else{
//                 for(int i=n-1;i>=0;i--){
//                     if(digits[i]==9){
//                         digits[i]=0;
//                     }
//                     else{
//                         digits[i]=digits[i]+1;
//                         break;    
//                     }
//                 }
//                 return digits;
//             }
//         }    
//         else{
//             digits[n-1]=digits[n-1]+1;
//             return digits;
//         }
//         return {000,000};
//     }

// };