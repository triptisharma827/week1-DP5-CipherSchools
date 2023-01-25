#include<bits/stdc++.h>
using namespace std;

void solve(string str,vector<string> &result,int open,int close){
    if(open<0 || close<0 || open>close){
        return ;
    }
    else if(open==0 && close==0){
        result.push_back(str);
        return ;
    }
    else if(open<=close){
        str.push_back('(');
        solve(str,result,open-1,close);
        str.pop_back();

        str.push_back(')');
        solve(str,result,open,close-1);
        str.pop_back();
    }
    
}
int main() {
    int n=3;
    vector<string> result;
    string str="";
    int open=n;

    int close=n;

    solve(str,result,open,close);
    cout<<"[";
    for(auto i:result){
        cout<<i<<" ";
    }
    cout<<"]";
    return 0;

}