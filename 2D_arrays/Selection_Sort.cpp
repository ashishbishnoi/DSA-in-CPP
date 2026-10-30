#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={5,4,2,9,8,7,3,6,5};
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int mnidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mnidx]){
                mnidx=j;
            }

        }
        swap(arr[i],arr[mnidx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
