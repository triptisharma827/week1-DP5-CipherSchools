#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    if(nums.size()<=2){
        return {};
    }
    vector<vector<int>> result;

    for(int i=0;i<nums.size();i++){
        int curr=nums[i];
        int start=i+1;
        int end=nums.size()-1;

        while(start<end){
            if(curr+nums[start]+nums[end]==0){
                result.push_back({curr,nums[start],nums[end]});
                start++;
                end--;

                // handling duplicate cases
                while(start<end && nums[start-1]==nums[start]){
                    start++;
                }
                while(start<end && nums[end+1]==nums[end]){
                    end--;
                }
            }
            else if(curr+nums[start]+nums[end]<0){
                start++;
            }
            else{
                end--;
            }
        }
        // handling duplicate value of i
        while(i+1<nums.size() && nums[i]==nums[i+1]){
            i++;
        }
    }
    return result;
}
int main(){
    vector<int> nums{-1,0,1,2,-1,-4};
    // threeSum(nums);
    for(auto i:threeSum(nums)){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

