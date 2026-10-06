a,b = map(int, input().split())
s = input()
ok = True
for i in range(len(s)):
  if i == a:
    if s[i] != '-':
      ok = False
  else:
    if s[i] == '-':
      ok = False
if ok == False:
  print("No")
else:
  print("Yes")