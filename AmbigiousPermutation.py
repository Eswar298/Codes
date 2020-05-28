#Ambigous Permutation

while True:
    n=int(input())
    if n!=0:
        li=list(map(int,input().split()))
        li1=[0]*len(li)
        for i in range(len(li)):
            li1[li[i]-1]=i+1
        if(li1==li):
            print("ambiguous")
        else:
                print("not ambiguous")
