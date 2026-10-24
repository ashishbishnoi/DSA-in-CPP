#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v ={5,2,8,3,1,0};
    sort(v.begin(),v.end());
    for (int ele :v ) cout<<ele<<" ";
    reverse(v.begin(),v.end());
    cout<<endl;
    for (int ele : v) cout<<ele<<" ";
}  