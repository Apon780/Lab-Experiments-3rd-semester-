#include <stdio.h>

int main() {
    int a[3][3],b[3][3];

    printf("Enter 1st array elements:\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

     printf("Enter 2nd array elements:\n");
 

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    int sub[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
        sub[i][j]=a[i][j]-b[i][j];
        }
    }

    printf("Substraction of two matrix :\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}