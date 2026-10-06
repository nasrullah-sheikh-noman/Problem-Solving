t = int(input())

for _ in range(t):
  n = int(input())
  arr = list(map(int, input().split()))
  ans = 10**18
  for i in range(n):
    for j in range(i+1, n):
      x = arr[i] + arr[j] + j - i
      ans = min(ans, x)
  print(ans)