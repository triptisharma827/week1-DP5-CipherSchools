#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> heights{0,1,0,2,1,0,1,3,2,1,2,1};
    int n=heights.size();
    vector<int> leftMax(n);
    vector<int> rightMax(n);
    int water_trap=0;

    int i=1;
    int j=n-2;
    leftMax[0]=heights[0];
    rightMax[n-1]=heights[n-1];
    while(i<n || j>=0){
        leftMax[i]=max(leftMax[i-1],heights[i]);
        rightMax[j]=max(rightMax[j+1],heights[j]);
        i++;
        j--;
    }

    for(int i=0;i<n;i++){
        water_trap+=(min(leftMax[i],rightMax[i])-heights[i]);
    }
    cout<<"Total water trapped : "<<water_trap;

    return 0;
}