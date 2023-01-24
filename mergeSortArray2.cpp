#include<bits/stdc++.h>
using namespace std;


// with recursion 

int firstOcc(vector<int> &nums,int low,int high,int element, int left){
    if(low>high){
        return left;
    }
    int mid=low+(high-low)/2;
    if(nums[mid]==element){
        left=mid;
        return firstOcc(nums,low,mid-1,element,left);
    }
    else if(nums[mid]<element){
        return firstOcc(nums,mid+1,high,element,left);
    }
    else{
        return firstOcc(nums,low,mid-1,element,left);
    }
    return left;

}
int lastOcc(vector<int> &nums,int low,int high,int element, int right){
    if(low>high){
        return right;
    }
    int mid=low+(high-low)/2;
    if(nums[mid]==element){
        right=mid;
        return lastOcc(nums,mid+1,high,element,right);
    }
    else if(nums[mid]<element){
        return lastOcc(nums,mid+1,high,element,right);
    }
    else{
        return lastOcc(nums,low,mid-1,element,right);
    }
    return right;

}

int main(){
    vector<int> nums{5,7,7,8,8,8,9,10,10};
    int element=9;
    int left=-1,right=-1;
    int low=0;
    int high=nums.size()-1;

    int first=firstOcc(nums,low,high,element,left);
    int last=lastOcc(nums,low,high,element,right);
    
    cout<<"{"<<first<<","<<last<<"}";
    


    return 0;
}