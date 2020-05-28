#Number of bits that are set and to get from dictionary

dic={}
while True:
    try:
        number = input();
        n=int(number)
        if number in dic:
            count=dic[number]
        else:
            count=0
            while n>0:
                n=n&(n-1)
                count=count+1
            dic[number]=str(count)
        print(count)
        #print(dic)
    except:
        break

