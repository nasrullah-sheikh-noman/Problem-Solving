if(x<0)
  return false;

int revnum = 0;
while(x) {
  int rem = x % 10;
  revnum *= 10 + rem;
  x /= 10;
}
return x == revnum;