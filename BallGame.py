A game is being played on a special ground which can be represented as a flat 2D plane with an X-axis and a Y-axis. 
Each cell is of two types, it is either empty or has a deflecting barrier. A ball passes through empty cells without 
any change in trajectory. A ball undergoes change of direction following laws of reflection when going through a barrier cell.

Given the starting and the ending points, your task is to find out whether or not it is possible to throw the ball in any 
one of the four cardinal directions (up, down, left or right) so that the ball may come to the ending position.

Sample Input 0

4
0 3
3 2
../.
..//
....
\...
Sample Output 0

yes
Explanation 0

If you throw the ball straight downwards, the ball bounces off the barriers twice and reaches the ending point.

def outofbounds(x,y,n):
    if((x < 0) or (y < 0) or (x >= n) or (y >= n)):
        return  True
    else:    
        return False;

def down(sx,sy,ex,ey,l,n):
    x = sx
    y = sy
    while(True):
        if(outofbounds(x,y,n)):
            return False
        if(x==ex and y==ey):
            return True
        if(l[x][y]=='.'):
            x += 1
        elif(l[x][y]== '/' ):
            return left(x,y-1,ex,ey,l,n)
        else:
            return right(x,y+1,ex,ey,l,n)
           
def up(sx,sy,ex,ey,l,n):
    x = sx
    y = sy
    while(True):
        if(outofbounds(x,y,n)):
        
            return False
        if(x==ex and y==ey):
            return True
        if(l[x][y]=='.'):
            x -= 1
        elif(l[x][y]=='/'):
            return right(x,y+1,ex,ey,l,n)
        else:
            return left(x,y-1,ex,ey,l,n)
           
def left(sx,sy,ex,ey,l,n):
    x = sx
    y = sy
    while(1):
        if(outofbounds(x,y,n)):
            return False
        if(x==ex and y==ey):
            return True
        if(l[x][y]=='.'):
            y -= 1
        elif(l[x][y]=='/'):
            return down(x+1,y,ex,ey,l,n)
        else:
            return up(x-1,y,ex,ey,l,n)
           
def right(sx,sy,ex,ey,l,n):
    x = sx
    y = sy
    while(1):
        if(outofbounds(x,y,n)):
            return False
        if(x==ex and y==ey):
            return True
        if(l[x][y]=='.'):
            y += 1
        elif(l[x][y]=='/'):
            return up(x-1,y,ex,ey,l,n)
        else:
            return down(x+1,y,ex,ey,l,n)
        

def solve(sx,sy,ex,ey,l,n):
    if(up(sx,sy,ex,ey,l,n) or down(sx,sy,ex,ey,l,n) or left(sx,sy,ex,ey,l,n) or right(sx,sy,ex,ey,l,n)):
        return True
    else:
        return False


n = int(input())
c = input()
sx , sy = map(int,c.split(" "))
c = input()
ex , ey = map(int , c.split(" "))
l=[]    
maxi = 0
for i in range(n):
    s = input()
    s = list(s)
    l.append(s)

if(solve(sx,sy,ex,ey,l,n)):
    print("yes")
else:
    print("no")
