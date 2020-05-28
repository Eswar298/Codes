#Three way coomunication:
      bool close(int dx, int dy, int r) {
  return dx*dx + dy*dy <= r*r;
}

int main() {
  int t, x[3], y[3], r, a, b, c, d, e, f;
  cin >> t;
  while (t--) {
    cin >> r >> a >> b >> c >> d >> e >> f;
    int num = 0;
    if (close(a-c,b-d,r)) ++num;
    if (close(a-e,b-f,r)) ++num;
    if (close(c-e,d-f,r)) ++num;
    if (num > 1) cout << "yes" << endl;
    else cout << "no" << endl;
  }
}

x1,y1=map(int,input().split())
    x2,y2=map(int,input().split())
    x3,y3=map(int,input().split())
    if(((x2-x1)**2+(y2-y1)**2)**0.5<=n):
        count=count+1
    if(((x2-x3)**2+(y2-y3)**2)**0.5<=n):
        count=count+1
    if(((x3-x1)**2+(y3-y1)**2)**0.5<=n):
        count=count+1
    if(count>=2):
        print("yes")
    else:
        print("no")
