from yogi import read

n = read(int)
while n is not None:
    print("true" if is_multiple_3(n) else "false")
    n = read(int)
