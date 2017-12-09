# Problem 1036
# https://www.urionlinejudge.com.br/judge/pt/problems/view/1036

def bhaskara(a,b,c):
    delta = ((b**2)-(4*a*c))

    if(delta < 0 or 2*a == 0):
        print('Impossivel calcular')
    else:
        r1 = ( (-b) + delta**0.5) / (2*a)
        r2 = ( (-b) - delta**0.5) / (2*a)
        print('R1 = %.5f\nR2 = %.5f' %(r1,r2))

entrada = input()
a,b,c = entrada.split()
a = float(a)
b = float(b)
c = float(c)
bhaskara(a,b,c)
