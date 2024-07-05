def extended_euclidean_algorithm(a, b):
    if b == 0:
        return 1, 0
    else:
        s, t = extended_euclidean_algorithm(b, a % b)
        return t, s - (a // b) * t


a, b = map(int, input().split())
s, t = extended_euclidean_algorithm(a, b)
print(s, t)