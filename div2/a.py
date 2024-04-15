import sys
sys.stdin=open('knight.in')
sys.stdout=open('knight.out','w')
n, m = map(int, input().split())
w = [[0] * 51] * 51
w[2][1] = 1
w[1][2] = 1
for i in range(2, n):
        for j in range(2, m):
            w[i][j] = w[i - 2][j - 1] + w[i - 1][j - 2]
    

print(w[n - 1][m - 1])