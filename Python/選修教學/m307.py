try:
    while True:
        x, n = map(int, input().split())
        
        if x == 0 and n == 0:
            break
        
        f = list(map(int, input().split()))
        f.sort()
        
        l, r = 0, 0
        for i in range(n):
            if f[i] < x:
                l += 1
            else:
                r += 1
        
        if l > r:
            print(l,f[0])
        else:
            print(r,f[n-1])
except EOFError:
    pass
