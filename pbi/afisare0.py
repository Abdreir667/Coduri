a=input()
temp=1
numar=[temp]
while temp <= int(a):
    numar.insert(int(temp),input())
    temp+=1
numar.remove(1)
mult=numar[int(a)-1]
for x in range(int(a)):
    aux=numar[x]
    if int(aux) % int(mult) == 0:
        print(aux,end=' ')