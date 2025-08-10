def sum_diagonals(mat):
    n = len(mat)
    s = 0
    for i in range(n):
        s += mat[i][i] + mat[i][n-1-i]
    if n%2==1:
        s -= mat[n//2][n//2]
    return s

m = [[1,2,3],[4,5,6],[7,8,9]]
print("Sum of diagonals:", sum_diagonals(m))

