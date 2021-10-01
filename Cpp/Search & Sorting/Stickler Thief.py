    s1,s2=0,0
    l = list(map(int, input().split()))
    l1 = [0]*(a+1)
    l1[0]=l[0]
    if(a>1):
        l1[1] = max(l1[0], l[1])
    for i in range(2,a):
        l1[i] = max(l[i]+l1[i-2], l1[i-1])
    print(l1[a-1])
        