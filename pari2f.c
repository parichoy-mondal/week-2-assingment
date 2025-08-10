#include <stdio.h>
#include <stdlib.h>

int* add_poly(int *a, int na, int *b, int nb, int *nr){
    int n = na>nb?na:nb;
    int *res = malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        int av = i<na? a[i] : 0;
        int bv = i<nb? b[i] : 0;
        res[i] = av+bv;
    }
    *nr = n;
    return res;
}

int main(){
    int p1[] = {5,0,10,6};
    int p2[] = {1,2,4};
    int nr;
    int *s = add_poly(p1,4,p2,3,&nr);
    printf("Sum coeffs: ");
    for(int i=0;i<nr;i++) printf("%d ", s[i]);
    printf("\n");
    free(s);
    return 0;
}

