#include<bits/stdc++.h>
using namespace std;

vector<string> dailpad={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void solve(string &input,string str,vector<string> &result,int start,int end){
    if(start>end){
        result.push_back(str) ;
    }
    
    else {
        char digitPressed=input[start];
        string possibleMoves= dailpad[digitPressed - '0'];

        for(int i=0;i<possibleMoves.size();i++){
            // recursion
            str.push_back(possibleMoves[i]);
            solve(input,str,result,start+1,end);
            // backtracking
            str.pop_back();
        }
        
    }
    
}
int main() {
    string input = "23";
    vector<string> result;
    string str="";
    int start=0;
    int end=input.size()-1;

    solve(input,str,result,start,end);
    cout<<"[";
    for(auto i:result){
        cout<<i<<" ";
    }
    cout<<"]";
    return 0;

}