class Solution {
public:
    bool isAnagram(string s, string t) {
      map<char, int> mp, mp2;
      for(auto x: s) {
        mp[x]++;
      }
      for(auto x: t) {
        mp2[x]++;
      }
      return mp == mp2;
    }
};