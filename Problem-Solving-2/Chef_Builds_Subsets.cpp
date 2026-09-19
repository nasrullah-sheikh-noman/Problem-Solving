vector<vector<int>> findSubsets(vector<int>& inputNumbers) {
  int n = inputNumbers.size();
  int total = 1 << n;
  vector<vector<int>> ans;
  for(int i = 0; i < total; i++) {
    vector<int> subset;
    for(int j = 0; j < n; j++) {
      if(i & (1 << j)) {
        subset.push_back(inputNumbers[j]);
      }
    } 
    ans.push_back(subset);
  }
  return ans;
}