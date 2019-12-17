def gcd(a, b):
    while(b): 
       a, b = b, a % b 
    return a 

n = int(input())
G,res = [] , 1
for i in range(n):
    G.append(int(input()))

for i in range(n):
    p = G[i]
    t = 1
    while(p != i+1):
        t += 1
        p = G[p-1]
    res = (res/gcd(res,t))*t

res
        
print("%d\n"%( res ) )