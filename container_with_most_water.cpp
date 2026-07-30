//  Container With Most Water


//  Brute Force
int maxWater = 0;
for (int i = 0; i < height.size(); i++) {
  for (int j = i+1; j < height.size(); j++) {
    int w = j - i;
    int h = min(height[i], height[j]);
    int currWater = h * w;
    maxWater = max(maxWater, currWater);
  }
}
return maxWater;

//  Two Pointers

int lp = 0, rp = height.size() - 1, ans = 0;
while(lp<rp) {
  int h = min(height[lp], height[rp]);
  int w = rp - lp;
  ans = max(ans, h * w);
  height[lp]<height[rp] ? lp++ : rp--;
}
return ans;