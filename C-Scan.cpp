#include <stdio.h>
#include <stdlib.h>

void cscan(int arr[], int head, int size) {
    int total = 0, i, j;
    int visited[size];
    for (i = 0; i < size; i++)
        visited[i] = 0;

    printf("Sequence of disk accesses:\n");
    int previous = head;
    int min = 0, max = size - 1;

    for (i = head; i <= max; i++) {
        if (visited[i] == 0) {
            printf("%d -> ", i);
            visited[i] = 1;
            total += abs(i - previous);
            previous = i;
        }
    }

    total += max - head;

    printf("0 -> ");

    for (i = 0; i < head; i++) {
        if (visited[i] == 0) {
            printf("%d -> ", i);
            visited[i] = 1;
            total += abs(i - previous);
            previous = i;
        }
    }

    total += head;

    printf("\nTotal head movement: %d\n", total);
}

int main() {
    int size, head;

    printf("Enter the size of the disk queue: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the disk queue elements: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter the initial head position: ");
    scanf("%d", &head);

    cscan(arr, head, size);

    return 0;
}

