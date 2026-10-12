n = int(input())

arr = list(map(int, input().split()))

ok = True
i = 0
j = -1
for _ in range(n):
  if arr[i] != arr[j]:
    ok = False
  j-=1
  i+=1

if ok:
  print("YES")
else:
  print("NO")