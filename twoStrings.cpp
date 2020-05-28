#Chef and two strings abc? a???

    for i in range(int (input())):
    str1 = input()
    str2 = input()
    mi=0
    ma=0
    n = len(str1)
    for i in range(n):
        if (str1[i]=='?' or str2[i]=='?'):
            ma=ma+1
        else:
            if(str1[i]!=str2[i]):
                ma=ma+1
                mi=mi+1
    print(mi,ma)
