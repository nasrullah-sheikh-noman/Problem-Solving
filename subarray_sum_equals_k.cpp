int n = nums.size();
int cnt = 0;

for(int i = 0; i < n; i++) {
  int sum = 0;
  for (int i = j + 1; j < n; j++) {
    sum += nums[j];
    if(sum==k)
      cnt++;
  }
}
return cnt;

// Optimized

int n = nums.size();
int cnt = 0;
vector<int> prefixSum(n, 0);
prefixSum[0] = nums[0];
for (int i = 1; i < n; i++) {
  prefixSum[i] = prefixSum[i - 1] + nums[i];
}
unordered_map<int> mp;
for (int i = 0;i < n; i++) {
  if(prefixSum[i]==k)
    cnt++;
  int val = prefixSum[i] - k;
  if(mp.find(val)!=mp.end())
    cnt += mp[val];
  if(mp.find(prefixSum[i])==mp.end())
    mp[prefixSum[i]] = 0;
  mp[prefixSum[i]]++;
}
return cnt;