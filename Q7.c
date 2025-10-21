#include <stdio.h>

int main() {
    int arr[10];
    int i, j;
    printf("Enter 10 IDs:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter ID %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    i = 0;
    while (i < 10) {
        j = i + 1;
        while (j < 10) {
            if (arr[i] != -1 && arr[i] == arr[j]) {
                arr[j] = -1;
            }
            j++;
        }
        i++;
    }
    printf("\nUpdated list after removing duplicates:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

