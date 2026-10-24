#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,45,67,89,11,101,987};
    int n=sizeof(arr)/sizeof(int);
    for (int i=0;i<n;i++){
        cout<<&arr[i]<<endl;
    }
}