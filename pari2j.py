import bisect
def count_zeros(mat):
    total=0
    for row in mat:
        idx = bisect.bisect_right(row, 0)
        total += idx
    return total

m = [[0,0,0,1],[0,0,2,3],[0,1,1,2]]
print("Count zeros:", count_zeros(m))

