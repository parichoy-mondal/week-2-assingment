def rotate90(mat):
    return [list(reversed(col)) for col in zip(*mat)]

m = [[1,2,3],[4,5,6],[7,8,9]]
print("Original:")
for r in m: print(r)
rot = rotate90(m)
print("Rotated 90 CW:")
for r in rot: print(r)

