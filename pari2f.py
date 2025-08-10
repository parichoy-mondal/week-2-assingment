def add_poly(a,b):
    n=max(len(a),len(b))
    res=[0]*n
    for i in range(n):
        ai=a[i] if i<len(a) else 0
        bi=b[i] if i<len(b) else 0
        res[i]=ai+bi
    return res

p1=[5,0,10,6]  
p2=[1,2,4]      
print("Sum coeffs:", add_poly(p1,p2))

