#include<iostream>
using namespace std;
int main(){
    int arr[][4]={{1,4,5,6},{5,4,8,9},{5,2,1,4},{7,8,9,6}};
    for(int i=0;i<4;i++){
        if(i%2==0){
            for(int j=0;j<4;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else {
            for(int j=3;j>=0;j--){
                cout<<arr[i][j]<<" ";
               
            }
        }
    }
}