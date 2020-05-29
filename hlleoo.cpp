Rohan has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to say hello to everybody.
Rohan typed the word s. It is considered that Rohan managed to say hello if several letters can be deleted from the typed word so that
it resulted in the word "hello". For example, if Rohan types the word "ahhellllloou", it will be considered that he said hello, and 
if he types "hlelo", it will be considered that Rohan got misunderstood and he didn't manage to say hello. Determine whether Rohan 
managed to say hello by the given words.


str=input()
actual="hello"
k=0
for i in range(len(str)):
    if(str[i]==actual[k]):
        k=k+1
        if(k==len(actual)):
            break
if(k==5):
    print("YES")
else:
    print("NO")
