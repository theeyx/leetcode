/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int* ans = malloc(sizeof(int) * numsSize);
    for(int i = 0; i < numsSize; ++i){
        if(i == 0){
            ans[0] = nums[0];
            ++i;
        }
        ans[i] = ans[i-1] + nums[i];
    }
    return ans;
}
