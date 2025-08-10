#include <stdio.h>

int is_identity(int **mat, int n){
    for(int i=0;i<n;i++) for(int j=0;j<n;j++){
        if (i==j && mat[i][j] != 1) return 0;
        if (i!=j && mat[i][j] != 0) return 0;
    }
    return 1;
}
int main(){
    int d1[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
    int d2[3][3] = {{1,0,0},{0,2,0},{0,0,1}};
    int *m1[3], *m2[3];
    for(int i=0;i<3;i++){ m1[i]=d1[i]; m2[i]=d2[i]; }
    printf("%s\n", is_identity(m1,3) ? "True" : "False");
    printf("%s\n", is_identity(m2,3) ? "True" : "False");
    return 0;
}

