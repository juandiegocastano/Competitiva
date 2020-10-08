import sys

first = input()
second = input()

l = len(second)
ans = 0
for i in range(len(first)):
    if(first[i:i+l] == second):
        ans += 1
print(ans)
