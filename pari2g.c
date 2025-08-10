#include <stdio.h>
#include <stdlib.h>

int* mul_poly(int *a, int na, int *b, int nb, int *nr){
    int n = na+nb-1;
    int *res = calloc(n, sizeof(int));
    for(int i=0;i<na;i++) for(int j=0;j<nb;j++) res[i+j] += a[i]*b[j];
    *nr = n;
    return res;
}

int main(){
    int p1[] = {5,0,10,6};
    int p2[] = {1,2,4};
    int nr;
    int *prod = mul_poly(p1,4,p2,3,&nr);
    printf("Product coeffs: ");
    for(int i=0;i<nr;i++) printf("%d ", prod[i]);
    printf("\n");
    free(prod);
    return 0;
}

