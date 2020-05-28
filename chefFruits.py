#Chef and fruits  3 4 1
t= int(input())
for i in range(t):
    a,o,g = map(int,input().split())
    required = abs(a-o)
    if required < g:
        print("0")
    else:
        print(required - g)

