#include<bits/stdc++.h>
using namespace std;

void mergeSortedArray(vector<int>& a, vector<int>& b,int  n, int m){
    int i=n-1,j=m-1,k=n+m-1;
    while(i>=0 && j>=0){
        if(a[i]>b[j]){
            a[k--]=a[i--];           
        }
        else {
            a[k--]=b[j--];
        }        
    }
    while(j>=0){
        a[k--]=b[j--]; 
    }
    
}

int main(){
    int m=3,n=4;
    vector<int> a{1,2,4,6,0,0,0};
    vector<int> b{0,5,8};

    mergeSortedArray(a,b,n,m);
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
