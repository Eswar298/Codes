#Cooking recipes
 Find the gcd..
l=list(map(int,input().split()))
     l=l[1:]
     def find_gcd(x, y): 
          while(y): 
               x, y = y, x % y 
          return x
     num1 = l[0] 
     num2 = l[1] 
     d = find_gcd(num1, num2) 
     for i in range(2, len(l)): 
          d = find_gcd(d, l[i]) 
     for j in range(0,len(l)):
          if(l[j]%d==0):
               l[j]=l[j]//d
     for j in range(0,len(l)):
           print(l[j],end=' ')
     print()
