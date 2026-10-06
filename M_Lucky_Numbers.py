a, b = map(int, input().split())

found = False
for num in range(a,b+1):
  lucky = True
  for c in str(num):
    if int(c) != 4 and int(c) != 7:
      lucky = False
      break
  if lucky == True:
    print(num, end=' ')
    found = True

if not found:
  print(-1)