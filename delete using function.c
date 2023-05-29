#include <stdio.h>

void deleteElement(int arr[], int size, int pos) {
    if (pos >= 0 && pos < size) {
        for (int i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pos;

    printf("Enter the position to delete (0-%d): ", size - 1);
    scanf("%d", &pos);

    deleteElement(arr, size, pos);

    printf("Array after deletion:\n");
    for (int i = 0; i < size - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

