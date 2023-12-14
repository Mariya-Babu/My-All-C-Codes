#include <stdio.h>
#define P 10
#define R 10

int alloc[P][R], max_need[P][R], avail[R], need[P][R], finish[P];

int main() {
    int p, r;
    printf("Enter number of processes: ");
    scanf("%d", &p);
    printf("Enter number of resources: ");
    scanf("%d", &r);

    printf("Enter allocated resources for each process:\n");
    for (int i = 0; i < p; ++i)
        for (int j = 0; j < r; ++j)
            scanf("%d", &alloc[i][j]);

    printf("Enter maximum resources needed for each process:\n");
    for (int i = 0; i < p; ++i) {
        for (int j = 0; j < r; ++j) {
            scanf("%d", &max_need[i][j]);
            need[i][j] = max_need[i][j] - alloc[i][j];
        }
        finish[i] = 0;
    }

    printf("Enter available resources: ");
    for (int i = 0; i < r; ++i)
        scanf("%d", &avail[i]);

    int safe = 0, work[R];
    for (int i = 0; i < r; ++i)
        work[i] = avail[i];

    while (safe < p) {
        int found = 0;
        for (int i = 0; i < p; ++i) {
            if (!finish[i]) {
                int j;
                for (j = 0; j < r; ++j)
                    if (need[i][j] > work[j]) break;

                if (j == r) {
                    for (int k = 0; k < r; ++k)
                        work[k] += alloc[i][k];
                    finish[i] = 1;
                    found = 1;
                    safe++;
                }
            }
        }
        if (!found) break;
    }

    if (safe == p) {
        printf("System is in safe state.\n");
    } else {
        printf("System is in unsafe state.\n");
    }

    return 0;
}
 


//Enter number of processes: 4
//Enter number of resources: 3
//Enter allocated resources for each process:
//1 1 2 3 4 5 1 2 3 1 2 3 3 4 5
//Enter maximum resources needed for each process:
//5 6 7 5 6 7 5 6 7 5 6 7
//Enter available resources: System is in safe state.
