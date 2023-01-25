#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<vector<int>> mat{{1,2,3},{4,5,6},{7,8,9}};
    int dir=1;
    int right=mat[0].size()-1;
    int left=0;
    int top=0;
    int down=mat.size()-1;

    while(top<=down && left<=right){
        if(dir==1){
            for(int i=left;i<=right;i++){
                cout<<mat[top][i]<<" ";
            }
            top++;
            dir++;
        }
        if(dir==2){
            for(int i=top;i<=down;i++){
                cout<<mat[i][right]<<" ";
            }
            right--;
            dir++;
        }
        if(dir==3){
            for(int i=right;i>=left;i--){
                cout<<mat[down][i]<<" ";
            }
            down--;
            dir++;
        }
        if(dir==4){
            for(int i=down;i>=top;i--){
                cout<<mat[i][left]<<" ";
            }
            left++;
            dir++;
        }
        dir=dir%4;
    }

    

    return 0;
}