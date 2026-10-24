# include <iostream>
# include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(8,-1); // ye 8 size ka array banayega with -1 as its all elements. 
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    arr.push_back(5); // adds 5 as LAST ELEMENT

    cout<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    arr.pop_back(); // rmeoves the last element
    cout<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}