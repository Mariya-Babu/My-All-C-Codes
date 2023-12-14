#include <stdio.h>
#include <stdlib.h>

void scan(int arr[], int head, int size) {
    int total = 0, temp, d, j;
    int visited[size];
    for (int i = 0; i < size; i++) {
        visited[i] = 0;
    }

    printf("Sequence of disk accesses:\n");
    printf("%d -> ", head);

    int previous = head;
    int direction = (head > size / 2) ? -1 : 1;

    for (int i = head; i >= 0 && i < size; i += direction) {
        if (visited[i] == 0) {
            printf("%d -> ", i);
            visited[i] = 1;
            total += abs(i - previous);
            previous = i;
        }
    }

    total += abs(head - (direction == 1 ? size - 1 : 0));
    printf((direction == 1) ? "0 -> " : "%d -> ", (direction == 1) ? size - 1 : 0);
    previous = (direction == 1) ? 0 : size - 1;

    for (int i = (direction == 1) ? 0 : size - 1; i >= 0 && i < size; i -= direction) {
        if (visited[i] == 0) {
            printf("%d -> ", i);
            visited[i] = 1;
            total += abs(i - previous);
            previous = i;
        }
    }

    printf("\nTotal head movement: %d\n", total);
}

int main() {
    int size, head;

    printf("Enter the size of the disk queue: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the disk queue elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the initial head position: ");
    scanf("%d", &head);

    scan(arr, head, size);

    return 0;
}

//98 183 37 122 14 124 65 67
