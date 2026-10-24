#include <iostream>
using namespace std;
int main(){
    int arr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}}; // array of arrays is called 2d array. arr[][] m pehla dabba khali chd do
    // for(int i=0;i<3;i++){                   // chlega pr dusra khali mt chdna error ajayega.
    //     for (int j=0;j<4;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for (int j=0;j<4;j++){                   // chlega pr dusra khali mt chdna error ajayega.
        for(int i=0;i<3;i++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
