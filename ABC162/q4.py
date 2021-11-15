# n = int(input())
# s = input()
n = 39
s = "RBRBGRBGGBBRRGBBRRRBGGBRBGBRBGBRBBBGBBBA"

r_cnt = s.count('R')
g_cnt = s.count('G')
b_cnt = s.count('B')


ans = r_cnt * g_cnt * b_cnt

for i in range(n):
    for d in range(n):
        j = i + d
        k = j + d
        print(i)
        print(j)
        print(k)
        if k >= n:
            break
        if s[i]!=s[j] and s[i]!=s[k] and s[j]!=s[k]:
            ans -= 1
print(ans)
