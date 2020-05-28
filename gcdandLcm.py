#Find gcd and lcm
def find_gcd(x,y):
    while(y):
        x,y = y,x%y
    return x
for i in range(int (input())):
    x,y = map(int,input().split())
    gcd = find_gcd(x,y)
    math.gcd(a,b)
    lcm = (x*y)//gcd
    print(gcd,lcm)
