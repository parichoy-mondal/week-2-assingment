#include <stdio.h>
int sum_diagonals(int **mat, int n){
    int s=0;
    for(int i=0;i<n;i++) s += mat[i][i] + mat[i][n-1-i];
    if (n%2==1) s -= mat[n/2][n/2];
    return s;
}
int main(){
    int data[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int *mat[3]; for(int i=0;i<3;i++) mat[i]=data[i];
    printf("Sum of diagonals: %d\n", sum_diagonals(mat,3));
    return 0;
}

