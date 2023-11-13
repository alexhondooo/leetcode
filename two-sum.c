#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize=2;
    int* res=malloc((*returnSize)*sizeof(int));
    for(int i=0; i<numsSize-1; i++){
        for(int j=i+1; j<numsSize; j++){
            if(nums[i]+nums[j]==target){
                res[0]=i;
                res[1]=j;
                return res;
            }
        }
    }
    return NULL;
}
