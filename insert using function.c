#include <stdio.h>

void insertElement(int arr[], int *size, int pos, int element) {
    if (pos >= 0 && pos <= *size) {
        for (int i = *size; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = element;
        (*size)++;
    }
}

int main() {
    int arr[50] = {1, 2, 3, 4, 5};
    int size = 5;
    int pos, element;

    printf("Enter the position to insert (0-%d): ", size);
    scanf("%d", &pos);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    insertElement(arr, &size, pos, element);

    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

