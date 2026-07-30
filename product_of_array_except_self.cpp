//  Product of Array Except Self


// Brute Force
vector<int> v(nums.size(), 1);
for (int i = 0; i < nums.size(); i++) {
  for (int j = 0; j < nums.size(); j++) {
    if(nums[j]!=nums[i])
      v[i] *= nums[j];
  }
}
return v;


//  Suffix ans Prefix | space complexity O(n) | time complexity O(n)
int n = nums.size();
vector<int> ans(n);
vector<int> pre(n, 1);
vector<int> suff(n, 1);
for (int i = 1; i < n; i++) {
  pre[i] = pre[i - 1] * nums[i - 1];
}
for (int i = n - 2; i >= 0; i--) {
  suff[i] = suff[i + 1] * nums[i + 1];
}
for (int i = 0; i < n; i++) {
  ans[i] = pre[i] * suff[i];
}
return ans;


//  optimize Way | space complexity O(1) | time complexity O(n)
int n = nums.size();
vector<int> ans(n, 1);
for (int i = 1; i < n; i++) {
  ans[i] = ans[i-1] * nums[i-1];
}
int suff = 1;
for (int i = n-2; i >= 0; i--) {
  suff *= nums[i + 1];
  ans[i] *= suff;
} 
return ans;