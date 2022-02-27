def fact(k):
    if k == 0:
        return 1
    return k * fact(k-1)

def binomial(n, k):
    return fact(n) // (fact(k) * fact(n-k))

row = 5

for i in range(row):
    for j in range(i+1):
        print(binomial(i, j), end=' ')
    print()