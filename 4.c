/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numSize, int target, int* returnSize) {
    int *result = (int*)malloc(2 * sizeof(int));
    for(int i = 0; i < numSize - 1; i++){
        for(int j = i + 1; j < numSize; j++){ // Corrected the loop to start from i + 1
            if (nums[i] + nums[j] == target){
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL; // Corrected NULL
}
int main()
{
    int nums[]={2, 7, 11, 15};
    int target = 9;
    int returnSize;
    int* result = twoSum(nums, sizeof(nums)/sizeof(nums[0]), target, &returnSize);
    
    if(returnSize == 2) {
        printf("\nIndices : [%d, %d]",result[0],result[1]);

    } else {
        printf("\nNo Two sum Solution Found");

    }
    free(result);
    return 0;
    
}