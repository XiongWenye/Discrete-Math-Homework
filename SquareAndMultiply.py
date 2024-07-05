def SquareAndMutiply(a, e, n):
    b = bin(e)[2:]
    b = b[::-1]
    ans = 1
    for i in range(len(b)):
        if b[i] == '1':
            ans = (a * ans) % n
        a = (a * a) % n
    return ans

base, exponent, modulus = map(int, input().split())
print(SquareAndMutiply(base, exponent, modulus))