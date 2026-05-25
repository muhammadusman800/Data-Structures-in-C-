#include <iostream>
using namespace std;

int main() {
    int mat[4][3]; // =  {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};  // initialization of 2D array
    int rows = 4;
    int cols = 3;


    for(int i = 0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>mat[i][j];
        }
    }
     
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
           cout<<mat[i][j]<<" ";
    
        }
        cout<<endl;
    }
    return 0;
}