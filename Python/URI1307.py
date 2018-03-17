'''
 To solve this problem, all you have to do is
 convert the binary in integer, then you have to
 find the greatest divisor commum and check
 if it is bigger then 1, it means that the s1 and s2
 can be made by L.

 on Python build-in there is the math library
 whith the gdc() function, but URI don't accept that!
'''

while cases:
    cont += 1
    #Convert the input in binary to integer
    s1 = int(input(),2)
    s2 = int(input(),2)
    gcd = lambda s1,s2: s2 if s1 % s2 == 0 else gcd(s2,s1%s2)
    if (gcd(s1,s2) > 1) :
        print("Pair #{}: All you need is love!".format(cont))
    else:
        print("Pair #{}: Love is not all you need!".format(cont))
    cases -= 1
