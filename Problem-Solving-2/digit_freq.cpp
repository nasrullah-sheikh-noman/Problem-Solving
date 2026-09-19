class Solution {
public:
    int digitFrequencyScore(int n) {
      string s = to_string(n);
      unordered_map<char, int> freq;
      for(char c : s) {
        freq[c]++;
      }
      int sc = 0;
      for(auto& [digit, count] : freq) {
        sc += (digit - '0') * count;
      }
      return sc;
    }
};©leetcode