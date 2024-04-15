for _ in range(int(input())):
    n, k = map(int, input().split())
    cnt = 0
    for i in range(1, n + 1):
        if k - i >= 0:
            k -= i
            cnt += 1
        else:
            break
    for i in range(n - 1, -1, -1):
        if k - 1 >= 0:
            k -= i
            cnt += 1
        else:
            break
    print(cnt)