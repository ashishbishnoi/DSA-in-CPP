#include <iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int arr[][4]={{1,2,3,4},{5,6,78,8},{9,10,11,12}};
    int max=INT_MIN;
    vector<int> x;
    for (int i=0;i<3;i++){
        max=INT_MIN;
        for(int j=0;j<4;j++) {
           if(arr[i][j]>max) max=arr[i][j];
        }
        x.push_back(max);
    }
    int min=INT_MAX;
    int n=x.size();
    for(int i=0;i<n;i++){
        if(x[i]<min) min=x[i];

    }
    cout<<min;
}
