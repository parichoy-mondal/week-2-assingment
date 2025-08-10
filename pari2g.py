def mul_poly(a,b):
    res=[0]*(len(a)+len(b)-1)
    for i,ai in enumerate(a):
        for j,bj in enumerate(b):
            res[i+j] += ai*bj
    return res

p1=[5,0,10,6]   
p2=[1,2,4]      
print("Product coeffs:", mul_poly(p1,p2))

