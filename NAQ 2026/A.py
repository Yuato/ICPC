n = int(input())
MOD = 998244353
ans = 0
ans += (n*n)* n

ans += ((n * n)) * 3

ans += (2 * n)
ans = ans/6
print(int(ans % MOD))