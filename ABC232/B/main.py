import sys

S = input()
T = input()

N = len(S)
def shift_s(s):
    new_s = ""
    for j in range(0, N):
        t = chr(ord(s[j]) + 1)
        if (t == '{'):
            t = 'a'
        new_s += t
    return new_s

new_S = S;
for i in range(0, 26):
    new_S = shift_s(new_S)
    if (new_S == T):
        print("Yes")
        sys.exit(0)

print("No")
