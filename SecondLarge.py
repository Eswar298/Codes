#Second large in three numbers

for i in range(int (input())):
    x,y,z=map(int,input().split())
    li=[]
    li.append(x)
    li.append(y)
    li.append(z)
    li.sort()
    print(li[1])
