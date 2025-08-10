#include <stdio.h>
int main(){
    int R=2,C=3;
    int a[2][3]={{1,2,3},{4,5,6}};
    printf("Original:\n");
    for(int i=0;i<R;i++){ for(int j=0;j<C;j++) printf("%d ",a[i][j]); printf("\n"); }
    printf("Transpose:\n");
    for(int j=0;j<C;j++){ for(int i=0;i<R;i++) printf("%d ", a[i][j]); printf("\n"); }
    return 0;
}

