int n = chars.size();
int idx = 0;
for(int i = 0; i < n; ) {
  char ch = chars[i];
  int cnt = 0;
  while(i < n && chars[i]==ch) {
    cnt++;
    i++;
  }
  if(cnt==1)
    chars[idx++] = ch;
  else {
    chars[idx++] = ch;
    string str = to_string(cnt);
    for(auto c: str)
      chars[idx++] = c;
  }
}
chars.resize(idx);
return idx;
