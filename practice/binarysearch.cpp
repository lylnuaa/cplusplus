#include <iostream>
#include <vector>
using namespace std;

int SearchElement(vector<int>& nums,int target){
    int n=nums.size();
    int l=0,r=n-1;
    while(l<=r){
        int mid=l-(l-r)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target) r=mid-1;
        else if(nums[mid]<target) l=mid+1;
    }
    return -1;
}


int main(){
    vector<int> nums={1,3,5,7,9};
    int target=5;
    cout<<SearchElement(nums,target)<<endl;
}