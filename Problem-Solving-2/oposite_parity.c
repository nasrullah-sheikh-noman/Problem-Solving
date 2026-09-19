/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countOppositeParity(int* nums, int numsSize, int* returnSize) {
  int* ans = (int*)malloc(numsSize * sizeof(int));
  *returnSize = numsSize;
  for(int i = 0; i < numsSize; i++) {
    int cnt = 0;
    for (int j = i+1; j < numsSize; j++) {
      if((nums[i] % 2) != (nums[j] % 2)) {
        cnt++;
      }
    }
    ans[i]= cnt;
  }
  return ans;
}