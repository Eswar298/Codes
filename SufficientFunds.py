//ATM sufficient Funds
x,y = map(float,input().split())
if x%5 == 0:
    if (x+0.5)<=y:
        print(y-x-0.5)
    else:
        print(y)
else:   
    print(y) 
