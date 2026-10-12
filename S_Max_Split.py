s = input()

cnt = 0
srt = 0
res = []
for i in range(len(s)):
  if(s[i]=='L'):
    cnt+=1
  else:
    cnt-=1
  if cnt == 0:
    res.append(s[srt:i+1])
    srt = i+1

print(len(res))

for i in range(len(res)):
  print(res[i])