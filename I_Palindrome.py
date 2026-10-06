n = input()
rv = int(str(n[::-1]))
print(rv)
if int(n) == int(rv):
  print("YES")
else:
  print("NO")