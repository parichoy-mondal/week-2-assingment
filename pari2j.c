#include <stdio.h>

int count_zeros_sorted(int a[][4], int R, int C){
    int count=0;
    int j = C-1;
    for(int i=0;i<R;i++){
        while (j>=0 && a[i][j] > 0) j--;
        // now j is index of last zero in row i (or -1)
        count += (j+1);
    }
    return count;
}

int main(){
    int a[3][4] = {{0,0,0,1},{0,0,2,3},{0,1,1,2}};
    printf("Count zeros: %d\n", count_zeros_sorted(a,3,4));
    return 0;
}

