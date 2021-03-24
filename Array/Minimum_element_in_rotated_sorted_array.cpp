#include<iostream>

using namespace std;

int findMin(int* nums, int size){
    int start = 0;
    int end = size - 1;

    while(start < end){
        if(nums[start] < nums[end]){ // array is not rotated
            return nums[start];
        }

        int mid = start + (end - start)/2;

        if(nums[mid] >= nums[start]) { // sorted from start to mid, rotation is from mid + 1 to end
            start = mid + 1;
        }else{
            end = mid;
        }
    }

    return nums[start];
}

int main(){

    int nums[] = {4, 5, 1, 2, 3 };
    int size = sizeof(nums)/sizeof(nums[0]);
    int min = findMin(nums, size); 
    cout<<min; 
}
