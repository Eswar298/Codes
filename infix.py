#Infix to postfix
ascii_lowercase   #abcef…….z
from string import ascii_lowercase
t=int(input())
for i in range(t):
    s=input()
    l=[]
    l1=[]
    o="+-/*^"
    a=ascii_lowercase
    for x in s:
        if x in o:
            l.append(x)
        elif x in a:
            l1.append(x)
        elif x==")":
            l1.append(l.pop())
    print("".join(l1))
print(“-“.join(str))
g-e-e-k-s
