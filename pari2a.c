#include <stdio.h>
#include <stdlib.h>

void spiral_print(int **mat, int R, int C) {
    int r1=0, r2=R-1, c1=0, c2=C-1;
    while (r1 <= r2 && c1 <= c2) {
        for (int c=c1; c<=c2; ++c) printf("%d ", mat[r1][c]);
        r1++;
        for (int r=r1; r<=r2; ++r) printf("%d ", mat[r][c2]);
        c2--;
        if (r1 <= r2) {
            for (int c=c2; c>=c1; --c) printf("%d ", mat[r2][c]);
            r2--;
        }
        if (c1 <= c2) {
            for (int r=r2; r>=r1; --r) printf("%d ", mat[r][c1]);
            c1++;
        }
    }
    printf("\n");
}

int main() {
    int R=3, C=3;
    int data[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int *mat[3];
    for(int i=0;i<R;i++) mat[i]=data[i];
    printf("Matrix:\n");
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++) printf("%d ", mat[i][j]);
        printf("\n");
    }
    printf("Spiral: ");
    spiral_print(mat, R, C);
    return 0;
}

