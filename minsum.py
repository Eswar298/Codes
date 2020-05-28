#Min Sum
for i in range(int(input())):
    num =int(input())
    li = list(map(int,input().split()))
    li.sort()
    sum1 = sum(li[0:2])
    print(sum1)
li.remove(min(li))