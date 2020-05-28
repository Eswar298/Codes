Find sum(sum(sum(n)))
def def_sum(n):
    c=0
    for i in range(1,n+1):
        c=c+i
    return c
for i in range(int(input())):
    num_times,num = map(int,input().split())
    sum1 = num
    for i in range(num_times):
        sum1 = def_sum(sum1)
    print(sum1)
