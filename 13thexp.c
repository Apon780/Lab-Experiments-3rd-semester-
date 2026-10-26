#include <stdio.h>

int main() {
    int arr[3][3];

    printf("Enter 9 elements:\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Array elements are:\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    int trans[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
         trans[j][i]=arr[i][j];
        }
    }

    printf("Transposed elements are:\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}