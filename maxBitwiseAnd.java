Chef got interested in bits and wanted to learn about them, so his friend Pintu gave him a special function F(X,Y,Z)=(X∧Z)⋅(Y∧Z),
where ∧ is the bitwise AND operator and X,Y,Z are non-negative integers.

Pintu wants Chef to maximise the function F(X,Y,Z) for given X and Y by choosing an appropriate Z. However, to make it interesting, Pintu also gave Chef limits L and R for Z. In other words, he wants Chef to find a non-negative integer Z (L≤Z≤R) such that F(X,Y,Z)=maxL≤k≤R(F(X,Y,k)). If there is more than one such value of Z, he should find the smallest one in the range [L,R].

Since Chef is busy cooking in the kitchen, he needs you to help him solve this problem.

Note: X, Y, L and R are chosen in such a way that maxL≤k≤R(F(X,Y,k)) never exceeds 2^62

Explanation
Example case 1: Here, Z=15 maximises the function, since F(7,12,15)=84. 
It is impossible to reach F>84 with any Z in the given range.

Example case 2: The smallest Z which maximises F is Z=7, and the value of F for this Z is 28.

public class Code {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t;
        t=sc.nextInt();
        while(t-->0) {
           long x = sc.nextInt();
           long y = sc.nextInt();
           long l = sc.nextInt();
           long r = sc.nextInt();
           ArrayList<Long> z = new ArrayList<Long>();
            boolean eq = true;
            long curr = 0;
            Long one = Long.valueOf("1");
            for (long i=62;i>=0;i--) {
                long p = one<<i;

                if ((l&p) == (r&p) && eq) {
                    curr = curr+(r&p);
                    continue;
                }
                if (eq) eq = false;

                if ((r&p) > 0) {
                    System.out.println("p is"+p);
                    z.add(curr+p-1);
                }
                curr = curr+(r&p);
            }
            z.add(r);
            z.add(l);
            Collections.sort(z);
            long ans = z.get(0);
            for (long v : z) {
                System.out.println("arr is"+v);
                if ((x&v)*(y&v) > (x&ans)*(y&ans))
                {
                    ans = v;
                    System.out.println("ans is finally"+ans);
                }
            }

            for (long i=62;i>=0;i--) {
                long p = one<<i;
                if ((ans&p) == 0) continue;
                if ((x&p) == 0 && (y&p) == 0 && ans-p>=l)
                {
                    System.out.println("ans is p is"+ans+" "+p);
                    ans = ans - p;
                }
            }
            System.out.println(ans);
        }
    }
}


def rangingl(lmin,ans):
    global l
    if lmin&(lmin-1)==0:
        x=lmin|ans 
        return x  
    else:
        y=rangingl(lmin&(lmin-1),ans)
        if y>=l :
            return y   
        return lmin|ans
def func(x,y,z):
    return (x&z)*(y&z)
for _ in range(int(input())): 
    x,y,l,r=map(int,input().strip().split())
    q=x|y  
    if x==0 or y==0:
        print(l)    
    elif q>=l and q<=r:
        print(q) 
    else:
        maxi=func(x,y,r) 
        ans=r
        z=r  
        while z:
            temp=z-1  
            if temp<l:
                break 
            if func(x,y,temp)>=maxi:
                maxi=func(x,y,temp)
                ans=temp 
            z=z&(z-1)   
        if func(x,y,l)>=maxi:
            maxi=func(x,y,l)
            ans=l        
        s=ans&q
        if s>=l:
            print(s)
        else:
            x=rangingl(l,s)
            print(x)
