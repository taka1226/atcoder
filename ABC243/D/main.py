N, X = input().split()
S = input()
T = []

N = int(N)
X = int(X)

for i in range(0, N):
    if (len(T) >= 1 and S[i] == 'U' and (T[-1] == 'L' or T[-1] == 'R')):
        T.pop()
    else:
        T.append(S[i])

for i in range(0, len(T)):
    if T[i] == 'U':
        X = X // 2;
    elif T[i] == 'R':
        X = 2 * X + 1;
    elif T[i] == 'L':
        X = 2 * X ;

print(X)
