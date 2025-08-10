#include <stdio.h>
#define N 3
void rotate90(int a[N][N]) {
    for(int i=0;i<N;i++) for(int j=i;j<N;j++){
        int t=a[i][j]; a[i][j]=a[j][i]; a[j][i]=t;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N/2;j++){
            int t = a[i][j]; a[i][j]=a[i][N-1-j]; a[i][N-1-j]=t;
        }
    }
}
int main(){
    int a[N][N]={{1,2,3},{4,5,6},{7,8,9}};
    printf("Original:\n");
    for(int i=0;i<N;i++){ for(int j=0;j<N;j++) printf("%d ", a[i][j]); printf("\n");}
    rotate90(a);
    printf("Rotated 90 CW:\n");
    for(int i=0;i<N;i++){ for(int j=0;j<N;j++) printf("%d ", a[i][j]); printf("\n");}
    return 0;
}

