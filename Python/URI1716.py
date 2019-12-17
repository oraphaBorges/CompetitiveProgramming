def gcd(a, b):
    while(b): 
       a, b = b, a % b 
    return a 

def mod_pow(a,b,c):
    expo =  lambda a,b,c: ((a % c)**b) % c
    return expo(a,b,c)

def inv(n,m):
  max, val = 0, 0
  while True:
    val = val + 1
    result = (val * n) % m
    if (result==1):
      break
    # Método da Parada
    if (max>100):
      return 0
    else:
      max += 1
  return val

def RSA(n,e,c):
    phi = 0
    i = 3
    while (i*i <= n):
        if (n%i == 0):
            phi = (i-1)*(n/i-1)
            break
        i += 2

    d = inv(e,phi)

    return mod_pow(c, d, n)

n = int(input())
e = int(input())
c = int(input())

print("%.2d\n"%(RSA(n,e,c)))