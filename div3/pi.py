# size = int(input())

# while(size != 0):
#     # int n;
#     # double a, h;
#     # cin >> n >> a >> h;
#     n, a, h = map(float, input().split())

#     # vector<double> massive(n);
#     massive = list(map(float, input().split()))
    
#     s2 = (h *  a) / 2;
#     ans = s2 * (n);

#     # for(int i = 0; i < n - 1; i++){
#     for i in range(int(n - 1)):
#         if(massive[i + 1] - massive[i] < h):
#             h1 = h - (massive[i + 1] - massive[i]);
            
#             s1 = (h1 * h1 * s2) / (h * h);
#             ans -= s1;
        
    
#     # cout << ans << "\n";
#     print(ans)

#     size -= 1


# print(input().split())
