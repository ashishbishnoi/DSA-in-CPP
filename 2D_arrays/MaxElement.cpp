#include <iostream>
#include<climits>
using namespace std;
int main(){
    int arr[][4]={{1,2,3,4},{5,6,78,8},{9,10,11,12}};
    int max=INT_MIN;
    for (int j=0;j<4;j++){                  
        for(int i=0;i<3;i++) {
           if(arr[i][j]>max) max=arr[i][j];
        }
        
    }
    cout<<max;
}
