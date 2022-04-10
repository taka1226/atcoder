N = int(input())

def solve(n):
    if (n == 1): return [1]
    else:
        return solve(n-1) + [n] + solve(n-1)


ans = solve(N)


for s in ans:
    print(s, end=' ')

print()
