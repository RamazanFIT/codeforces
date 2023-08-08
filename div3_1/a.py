import math
for v in range(int(input())):
    n = int(input())

    list_ = list(map(int, input().split()))

    dict_ = dict()
    for i in list_:
        if i in dict_:
            dict_[i]+=1
        else:
            dict_[i] = 1

    # D = 1 + 8 * len(list_)

    # x = (1 + math.sqrt(D)) / 2

    ans = [999999999] * n
    # print(dict_)
    last = 1
    for i, j in dict_.items():
        # if j < n:
        #     # ans[n - j] = i 
        #     if(ans[n - j] != 999999999)
        #     continue
        # else:
            # DD = 1 + 8 * j
            # y = (-1 + math.sqrt(DD)) / 2
            # z = n - 1 - int(y)
            # ans[z] = i
        k = j
        cnt = n - 2
        cnt1 = last
        while k > 0:
            if ans[cnt] == 999999999:

                ans[cnt] = i
                k -= cnt1
                
            cnt1+=1
            cnt-=last
            last = cnt1

    print(*ans)
    # m = 0
    # for i in ans:
    #     if i != 999999999:
    #         print(i, end=" ")
    #     else:
    #         m+=1
    # for i in range(m):
    #     print(999999999, end=" ")
    # print()
