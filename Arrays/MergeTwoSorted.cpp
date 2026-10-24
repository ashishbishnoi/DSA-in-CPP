#include<iostream>
using namespace std;
int main(){
    int a[] = {10,20,40,70,90,100};
    int b[] = {30,50,60,80};
    int m = sizeof(a)/4, n = sizeof(b)/4;
    int c[m+n];
    int i = 0, j = 0, k = 0;
    while(i<m && j<n){
        if(a[i] < b[j])
            c[k++] = a[i++];
        else // b[j] < a[i]
            c[k++] = b[j++];
    }
    while(j<n)
        c[k++] = b[j++];
    while(i<m)
        c[k++] = a[i++];
    for(int i=0;i<m+n;i++){
        cout<<c[i]<<" ";
    }
}

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i=0,j=0;
//         vector<int> nums3; 
//         while(i<m && j<n){
//             if(nums1[i]<nums2[j]){
//                 nums3.push_back(nums1[i]);
//                 i++;
//             }
//             else{
//                 nums3.push_back(nums2[j]);
//                 j++;
//             }
//         }
//         while(i<m) {
//             nums3.push_back(nums1[i]);
//             i++;
//         }
//         while(j<n){
//             nums3.push_back(nums2[j]);
//             j++;
//         }
//         for(int k=0;k<m+n;k++){
//             nums1[k]=nums3[k];
//         }

        

//     }
// };






// method 2
// #include<iostream>
// using namespace std;
// int main(){
//     int a[] = {10,20,40,70,90,100};
//     int b[] = {30,50,60,80};
//     int m = sizeof(a)/4, n = sizeof(b)/4;
//     int c[m+n];
//     int i = m-1, j = n-1, k = m+n-1;
//     while(i>=0 && j>=0){
//         if(a[i] > b[j])
//             c[k--] = a[i--];
//         else // b[j] > a[i]
//             c[k--] = b[j--];
//     }
//     while(j>=0)
//         c[k--] = b[j--];
//     while(i>=0)
//         c[k--] = a[i--];
//     for(int i=0;i<m+n;i++){
//         cout<<c[i]<<" ";
//     }
// }