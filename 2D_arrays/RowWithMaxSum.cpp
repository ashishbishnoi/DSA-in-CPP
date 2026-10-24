#include <iostream>
#include<climits>
using namespace std;
int main(){
    int arr[][4]={{1,2,3,4},{5,6,78,8},{9,10,11,12}};
    int count=INT_MIN,sum;
    int x;
    for (int i=0;i<3;i++){
        sum=0;
        for(int j=0;j<4;j++) {
           sum+=arr[i][j];
        }
        if(sum>count) {
            count=sum;
            x=i;
        }
        else continue;
    }
    cout<<"max sum is "<<count<<" with row number "<<x+1;
}
