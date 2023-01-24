#include<bits/stdc++.h>
using namespace std;


// with iterative approach 

int firstOcc(vector<int> &nums,int low,int high,int element, int left){
      
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==element){
            left=mid;
            high=mid-1;
        }
        else if(nums[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return left;

}
int lastOcc(vector<int> &nums,int low,int high,int element, int right){

    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==element){
            right=mid;
            low=mid+1;
        }
        else if(nums[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return right;

}

int main(){
    vector<int> nums{5,7,7,8,8,8,9,10,10};
    int element=5;
    int left=-1,right=-1;
    int low=0;
    int high=nums.size()-1;

    int first=firstOcc(nums,low,high,element,left);
    int last=lastOcc(nums,low,high,element,right);
    
    cout<<"{"<<first<<","<<last<<"}";
    


    return 0;
}