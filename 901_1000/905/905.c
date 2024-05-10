/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdlib.h>

int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int* arr = (int*)malloc(numsSize * sizeof(int));
    if (arr == NULL) {
        *returnSize = 0;
        return NULL;
    }
    int evenCounter = 0, oddCounter = numsSize - 1;
    /*
    if the numbers is even add to starting of array
    else start adding from backwards
    */
    for (int i = 0;i < numsSize;i++) {
        if (nums[i] % 2 == 0) {
            arr[evenCounter++] = nums[i];
        } else {
            arr[oddCounter--] = nums[i];
        }
    }
    *returnSize = numsSize;
    return arr;
}