#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> res;
void powerSet(vector<int> &num,int idx,vector<int> set){
    if(idx==num.size()){
        res.push_back(set);
        return ;
    }
    set.push_back(num[idx]);
    powerSet(num,idx+1,set);
    set.pop_back();
    powerSet(num,idx+1,set);
}

int main(){
    vector<int> num{1,2,3};
    vector<int> set;
    int idx=0;

    powerSet(num,idx,set);
    for(auto i:res){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}