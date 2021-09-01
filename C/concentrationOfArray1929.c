/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize * 2;
    int* ans = malloc(sizeof(int) * numsSize * 2);
    for(int i = 0; i < numsSize * 2; ++i){
        ans[i] = nums[i % numsSize];
    }
    return ans;
}
