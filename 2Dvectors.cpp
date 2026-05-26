#include <iostream>
#include<vector>
using namespace std;
// 2D vectors , dynamic, can be resize
int main() {
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}}; //3x3
    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}