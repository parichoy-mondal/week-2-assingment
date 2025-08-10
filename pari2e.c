#include <stdio.h>
int is_sparse(int **mat, int R, int C){
    int zeros=0;
    for(int i=0;i<R;i++) for(int j=0;j<C;j++) if(mat[i][j]==0) zeros++;
    return zeros > (R*C)/2;
}
int main(){
    int data[3][3]={{0,0,3},{0,5,0},{7,0,0}};
    int *mat[3]; for(int i=0;i<3;i++) mat[i]=data[i];
    printf("Is sparse? %s\n", is_sparse(mat,3,3) ? "True" : "False");
    return 0;
}

