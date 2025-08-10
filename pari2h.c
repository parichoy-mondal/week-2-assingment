#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data; int sz; int cap;
} Seq;

void push(Seq *s, int v){
    if(s->sz==s->cap){
        s->cap = s->cap? s->cap*2 : 2;
        s->data = realloc(s->data, s->cap * sizeof(int));
    }
    s->data[s->sz++] = v;
}

int get(Seq *s, int idx){ return s->data[idx]; }

int main(){
    int n=2;
    Seq *seqs = calloc(n, sizeof(Seq));
    int qcount=5;
    int queries[5][3] = {{1,0,5},{1,1,7},{1,0,3},{2,1,0},{2,1,1}};
    int lastAnswer=0;
    printf("Outputs: ");
    for(int i=0;i<qcount;i++){
        int t=queries[i][0], x=queries[i][1], y=queries[i][2];
        int idx = (x ^ lastAnswer) % n;
        if(t==1){
            push(&seqs[idx], y);
        } else {
            int val = get(&seqs[idx], y % seqs[idx].sz);
            lastAnswer = val;
            printf("%d ", lastAnswer);
        }
    }
    printf("\n");
    for(int i=0;i<n;i++) free(seqs[i].data);
    free(seqs);
    return 0;
}

