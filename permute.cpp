#include<bits/stdc++.h>
using namespace std;

void solve(string &str,int left, int right){
    if(left==right){
        cout<<str<<endl;
    }
    else{
        for(int i=left;i<=right;i++){
        // recursion 
        swap(str[i],str[left]);
        // function call to traverse l+1 char 
        solve(str,left+1,right);
        // backtrack 
        swap(str[i],str[left]);

    }
    }
}
int main() {
    string str="abc";
    int n=str.size()-1;
    solve(str,0,n);

    return 0;
}