/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    *returnSize = numsSize;
    int count = 0;
    int i = 0;
    int* ans = malloc(sizeof(int) * numsSize);
    for(i = 0; i < n; ++i){
        ans[count++] = nums[i];
        ans[count++] = nums[i + n];
    }
    return ans;
}
