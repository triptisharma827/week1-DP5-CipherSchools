#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &arr, int low, int high, int target) {
   if(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            return binarySearch(arr,mid+1,high,target);
        }
        else{
            return binarySearch(arr,low,mid-1,target);
        }
   }
   return -1;
}
int main() {
   vector<int> arr{1, 3, 7, 15, 18, 20, 25, 33, 36, 40};
   
   int target=15;
   int low=0;
   int high=arr.size()-1;
   int index=binarySearch(arr,low,high,target);
   cout<<index<<endl;
   
   return 0;
}