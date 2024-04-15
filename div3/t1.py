k = int(input())

for _ in range(k):
    size, k = map(int, input().split())

    list_1 = list(map(int, input().split()))
    list_2 = list(map(int, input().split()))
    some_list = dict()
    for i in list_2:
        # some_list[i] += 1 
        if not i in some_list:
            some_list[i] = 1
        else:
            some_list[i] += 1
             
    ans = [0] * size
    ind = 0
    for i in list_1:
        l = i - k
        r = i + k
        if l in some_list and some_list[l] != 0:
            ans[ind] = l
            ind += 1
            some_list[l] -= 1
        elif r in some_list and some_list[r] != 0:
            ans[ind] = r
            ind += 1
            some_list[r] -= 1
    
    print(*ans)
        

        
