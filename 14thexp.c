#include <stdio.h>

int main() {
    int a[3][3],b[3][3];

    printf("Enter 1st array elements:\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Array elements are:\n");
 

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }
     printf("Enter 2nd array elements:\n");
    int sum[100][100];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
        sum[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("Sum of two matrix :\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}