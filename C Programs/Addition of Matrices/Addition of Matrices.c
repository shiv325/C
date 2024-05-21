// |=============================================================================================================================================================|
// |                                                                 C Program : Addition of Matrices                                                            |
// |=============================================================================================================================================================|


#include <stdio.h>

int main() {
    int M, N;
    printf("Enter No. of Rows => ");
    scanf("%d", &M);
    printf("Enter No. of Columns => ");
    scanf("%d", &N);
    int mtx1[M][N], mtx2[M][N], sum_mtx[M][N];
    printf("\n");
    printf("Enter the elements for Matrix #1 separated with space.\n");
    for (int i = 0; i < M; i++) {
        printf("Enter the elements of row %d => ", i);
        for (int j = 0; j < N; j++) {
            scanf("%d", &mtx1[i][j]);
        };
    };
    printf("\n");
    printf("Enter the elements for Matrix #2 separated with space.\n");
    for (int i = 0; i < M; i++) {
        printf("Enter the elements of row %d => ", i);
        for (int j = 0; j < N; j++) {
            scanf("%d", &mtx2[i][j]);
        };
    };
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            sum_mtx[i][j] = mtx1[i][j] + mtx2[i][j];
        };
    };
    printf("\nAddition of Matrices #1 and #2 =>\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", sum_mtx[i][j]);
        };
        printf("\n");
    };
};
