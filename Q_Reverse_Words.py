s = list(map(str, input().split()))

for val in s:
  print(val[::-1], end=" " if val != s[-1] else "")