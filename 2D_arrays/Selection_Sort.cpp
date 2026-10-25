#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={5,4,2,9,8,7,3,6,5};
    int n=arr.size();
    int m;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            m=-1;
            if(arr[j]>arr[j+1]){
                m=j+1;
            }
        }
        int temp=arr[i];
        arr[i]=arr[m];
        arr[m]=arr[i];
    }
}
