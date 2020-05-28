#Lapindromes

cin >> s;
	    l = s.length();
	    if(l%2==0){
	        l = l/2;
	        j = l;
	    }
	    else{
	        j = l/2+1;
	        l=l/2;
	    }
	    ts = s.substr(j,l);
	    s= s.substr(0,l);
	    for(i=0;i<l;i++){
	        if(count(s.begin(),s.end(),s[i]) != count(ts.begin(),ts.end(),s[i]))
	        break;
	    }
	    if(i==l)
	    cout<< "YES" << endl;
	    else
	    cout<< "NO" << endl;

for z in range(t):
    s = input()
    if(len(s) % 2 == 0):
        d = s[0:(len(s)//2)]
        b = s[len(s)//2 : len(s)]
    else:
        d = s[0:(len(s)//2)]
        b = s[(len(s)//2 + 1): len(s)]
    if sorted(d) == sorted(b):
        print("YES")
    else:
        print("NO")
