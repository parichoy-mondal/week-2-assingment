def is_sparse(mat):
    rows=len(mat); cols=len(mat[0]) if rows else 0
    zeros=sum(1 for r in mat for x in r if x==0)
    return zeros > (rows*cols)/2

m = [[0,0,3],[0,5,0],[7,0,0]]
print("Is sparse?", is_sparse(m))

