# spiral.py
def spiral_print(mat):
    if not mat: 
        return []
    r1, r2 = 0, len(mat)-1
    c1, c2 = 0, len(mat[0])-1
    res = []
    while r1 <= r2 and c1 <= c2:
        for c in range(c1, c2+1):
            res.append(mat[r1][c])
        r1 += 1
        for r in range(r1, r2+1):
            res.append(mat[r][c2])
        c2 -= 1
        if r1 <= r2:
            for c in range(c2, c1-1, -1):
                res.append(mat[r2][c])
            r2 -= 1
        if c1 <= c2:
            for r in range(r2, r1-1, -1):
                res.append(mat[r][c1])
            c1 += 1
    return res
m = [[1,2,3],[4,5,6],[7,8,9]]
print("Matrix:")
for row in m: print(row)
print("Spiral:", spiral_print(m))

