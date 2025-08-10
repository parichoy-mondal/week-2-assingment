def is_identity(mat):
    n=len(mat)
    for i in range(n):
        for j in range(n):
            if i==j and mat[i][j]!=1: return False
            if i!=j and mat[i][j]!=0: return False
    return True

m1=[[1,0,0],[0,1,0],[0,0,1]]
m2=[[1,0,0],[0,2,0],[0,0,1]]
print(is_identity(m1))  # True
print(is_identity(m2))  # False

