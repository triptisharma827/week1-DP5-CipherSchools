#include<bits/stdc++.h>
using namespace std;


int search(vector<int>& arr,int low ,int high){
    if(low<=high){
        int mid=low+(high-low)/2;
        
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid-1]>arr[mid] ){
            return search(arr,low,mid-1);
        }
        else{
            return search(arr,mid+1,high);
        }
    }
    return -1;
}
int main() {
    
    vector<int> arr{0,1,0};
    
    int high=arr.size()-1;
    int low=1;
    
    cout<<search(arr, low, high);
    return 0;
}