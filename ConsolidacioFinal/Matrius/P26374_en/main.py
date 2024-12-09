from yogi import read, tokens

for n in tokens(int):
    a = [[read(int) for _ in range(n)] for _ in range(n)]
    b = [[read(int) for _ in range(n)] for _ in range(n)]
    c = sum(a, b)
    for i in range(0, n):
        print(*c[i], '')
    print()
