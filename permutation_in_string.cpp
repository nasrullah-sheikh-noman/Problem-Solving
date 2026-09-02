bool isFreqSame(int freq1[26], int freq2[26]) {
  for (int i = 0; i < 26; i++) {
    if(freq1[i]!=freq2[i])
      return false;
  }
  return true;
}

int freq[26] = {0};
for (int i = 0; i < s1.size(); i++) {
  freq[s1[i] - 'a']++;
}
int winsize = s1.size();
for (int i = 0; i < s2.size(); i++) {
  int idx = i, winidx = 0;
  int winFreq[26] = {0};
  while(winidx<winsize && idx < s2.size()) {
    winFreq[s2[idx] - 'a']++;
    winidx++;
    idx++;
  }
  if(isFreqSame(winFreq, freq))
    return true;
}
return false;