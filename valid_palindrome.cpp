bool alphaNumeric(char c) {
  if((c>='0' && c<='9') || (c>='A'&&c<='Z') || (c>='a'&&c<='z'))
    return true;
  return false;
}

int st = 0, end = s.size() - 1;
while(st<end) {
  if(!alphaNumeric(s[st]))
    st++;
  if(!alphaNumeric(s[end]))
    end--;
  if(tolower(s[st])!=tolower(s[end]))
    return false;
  st++;
  end--;
}
return true;