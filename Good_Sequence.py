from collections import *

n = int(input())

arr = list(map(int, input().split()))

freq = Counter(arr)
ans = 0
for key, val in freq.items():
  # print(key, val)
  if val > key:
    ans += val - key
  elif val < key:
    ans += val 

print(ans)