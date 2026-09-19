int compareBitonicSums(int* nums, int numsSize) {
  int split = 0;
  int len = 0;
  for (int i = 0; i < numsSize; i++) {
    if (nums[i] > split) {
      split = nums[i];
      len = i;
    }
  }
  long long asum = 0;
  for (int i = 0; i <= len; i++) {
    asum += nums[i];
  }
  long long dsum = 0;
  for (int i = len; i < numsSize; i++) {
    dsum += nums[i];
  }
  if (asum > dsum) {
    return 0;
  } else if (dsum > asum) {
    return 1;
  } else {
    return -1;
  }
}