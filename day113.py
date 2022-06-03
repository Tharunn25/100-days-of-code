import sys


s, n, m = input().strip().split(' ')
s, n, m = [int(s), int(n), int(m)]
a = [int(keyboards_temp) for keyboards_temp in input().strip().split(' ')]
b = [int(pendrives_temp) for pendrives_temp in input().strip().split(' ')]
ans = -1
for x in a:
    for y in b:
        if x + y <= s:
            ans = max(ans, x + y)
print(ans)
