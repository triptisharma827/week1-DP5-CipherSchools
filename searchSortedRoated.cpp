#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int start=0;
    int end=nums.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<=nums[end]){
                if(nums[mid]<=target && target<=nums[end]){
                start=mid+1;
            }
            else {
                end=mid-1;
            }
        }
        else{
            if(nums[mid]>=target && target>=nums[start]){
                end=mid-1;
            }
            else{
                start =mid+1;
            }
            
        }

    }
    return -1;
}

int main(){
    vector<int> nums{7,8,9,1,2,3,4,5};
    int target=9;
    cout<<search(nums,target);


    
    return 0;
}