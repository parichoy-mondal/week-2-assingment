def dynamic_array(n, queries):
    seqs=[[] for _ in range(n)]
    lastAnswer=0
    out=[]
    for q in queries:
        t,x,y = q
        idx = (x ^ lastAnswer) % n
        if t==1:
            seqs[idx].append(y)
        else:
            lastAnswer = seqs[idx][y % len(seqs[idx])]
            out.append(lastAnswer)
    return out

n=2
queries = [
    (1,0,5),
    (1,1,7),
    (1,0,3),
    (2,1,0),
    (2,1,1)
]
print("Outputs:", dynamic_array(n, queries))

