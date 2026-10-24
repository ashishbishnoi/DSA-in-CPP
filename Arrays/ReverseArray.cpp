#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={10,20,30,40,50,60,70};
    // int i=0,j=arr.size()-1;
    // while(i<j){
    //     int temp=arr[i];
    //     arr[i]=arr[j];
    //     arr[j]=temp;
    //     i++;
    //     j--;

    // }
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";

    // }

    int i=0,j=arr.size()-1;
    while(i<j){
        swap(arr[i],arr[j])
        i++;
        j--;
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}