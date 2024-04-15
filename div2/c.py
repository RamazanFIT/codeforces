from math import ceil,sqrt
from decimal import *
getcontext().prec = 19
half = Decimal(0.5)

nn = int(input())

for _ in range(nn):
    n, k = map(Decimal, input().split())

    firts_part = int(((1 + n) / 2) * n)
    second_part = int(((1 + (n - 1)) / 2) * (n - 1))
    if firts_part + second_part <= k:
        print(2 * n - 1)
        continue

    if k <= firts_part:
        D = 1 + 8 * k
        x = ceil((-1 + Decimal.sqrt(D)) / 2)
        print(x)
    else:
        # print(firts_part)
        # b = n * n + n - 2 * (k - firts_part)
        H = k - firts_part
        # b = n * n - n - 2 * k - 2 * firts_part
        b = n * n - n - 2 * H
        # print(b)
        D = 1 + 4 * b
        x1 = int((1 + Decimal.sqrt(D)) / 2)
        x2 = int((1 - Decimal.sqrt(D)) / 2)
        x = max(x1, x2)
        # print(x)
        print(n + (n  - x))


        
  
        





        

# 

        
  
        





        