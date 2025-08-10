mat = [[1,2,3],[4,5,6]]
trans = [list(row) for row in zip(*mat)]
print("Original:", mat)
print("Transpose:", trans)

