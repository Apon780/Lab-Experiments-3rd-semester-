#include <stdio.h>
#define MAX 100

// Function prototypes
void traverse(int arr[], int n);
int insert(int arr[], int n, int pos, int val);
int delete(int arr[], int n, int pos);

int main() {
    int arr[MAX], n, choice, pos, val;
    int i;

    // Initial array input
    printf("Enter number of elements (max %d): ", MAX);
    scanf("%d", &n);

    if(n < 0 || n > MAX) {
        printf("Invalid size! Exiting...\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Menu loop
    do {
        printf("\n--- MENU ---\n");
        printf("1. Traverse\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(n == 0) {
                    printf("Array is empty!\n");
                } else {
                    traverse(arr, n);
                }
                break;

            case 2:
                if(n == MAX) {
                    printf("Array is full! Cannot insert.\n");
                } else {
                    printf("Enter position to insert (1 to %d): ", n+1);
                    scanf("%d", &pos);
                    printf("Enter value to insert: ");
                    scanf("%d", &val);
                    n = insert(arr, n, pos, val);
                }
                break;

            case 3:
                if(n == 0) {
                    printf("Array is empty! Cannot delete.\n");
                } else {
                    printf("Enter position to delete (1 to %d): ", n);
                    scanf("%d", &pos);
                    n = delete(arr, n, pos);
                }
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 4);

    return 0;
}

// Function to traverse array
void traverse(int arr[], int n) {
    int i;
    printf("Array elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert element
int insert(int arr[], int n, int pos, int val) {
    int i;
    if(pos < 1 || pos > n+1) {
        printf("Invalid position!\n");
        return n;
    }
    for(i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = val;
    n++;
    printf("Element inserted successfully.\n");
    traverse(arr, n);
    return n;
}

// Function to delete element
int delete(int arr[], int n, int pos) {
    int i;
    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return n;
    }
    for(i = pos-1; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;
    printf("Element deleted successfully.\n");
    traverse(arr, n);
    return n;
}

