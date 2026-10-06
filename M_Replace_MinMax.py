n = int(input())
nums = list(map(int, input().split()))
mx = 0
mn = 100000
for num in nums:
  if num > mx:
    mx = num
  if num < mn:
    mn = num

for num in nums:
  if num == mx:
    print(mn, end=" ")
  elif mn == num:
    print(mx, end=" ")
  else:
    print(num, end=" ")
