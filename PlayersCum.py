#Players cumulative sum:

leader=[]
lead=[]
l1=[]
l2=[]
t= int(input())
for i in range(t):
    a, b = map(int, input().split())
    l1.append(a)
    l2.append(b)
c=[]
d=[]
c.append(l1[0])
d.append(l2[0])
for i in range(1,len(l1)):
    sum = c[i-1]+l1[i]
    c.append(sum)
    sum = d[i-1]+l2[i]
    d.append(sum)
for i in range(len(c)):
    if(c[i]>d[i]):
        leader.append(c[i]-d[i])
        lead.append(1)
    else:
        leader.append(d[i]-c[i])
        lead.append(2)
max1 = 0
max2 = 0
for i in range(len(leader)):
    if(leader[i] >max1):
        max1 = leader[i]
        max2 = lead[i]
print(max2,max1)

