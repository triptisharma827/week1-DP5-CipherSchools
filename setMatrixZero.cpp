#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int r=matrix.size();
    int c=matrix[0].size();
    int Col=false;
    for(int i=0;i<r;i++){
        if(matrix[i][0]==0){
            Col=true;
        }
        for(int j=1;j<c;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                matrix[0][j]=0;
            }
        }
    }
    for(int i=1;i<r;i++){
        for(int j=1;j<c;j++){
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
    }
    if(matrix[0][0]==0){
        for(int i=0;i<c;i++){
            matrix[0][i]=0;
        }
    }
    if(Col){
        for(int i=0;i<r;i++){
            matrix[i][0]=0;
        }
    }
}
        
int main(){
    vector<vector<int>> matrix{{0,1,2},{1,4,6},{0,1,0}};
    setZeroes(matrix);
    for(auto i:matrix){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}