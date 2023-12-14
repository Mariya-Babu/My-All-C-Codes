#include <stdio.h>
#define MAX_B 100
#define MAX_P 100

int main() {
    int b[MAX_B], p[MAX_P], a[MAX_P], m, n;
    printf("Enter block/process counts: ");
    scanf("%d%d", &m, &n);

    printf("Enter block sizes:\n");
    for (int i = 0; i < m; ++i) scanf("%d", &b[i]);

    printf("Enter process sizes:\n");
    for (int i = 0; i < n; ++i) scanf("%d", &p[i]);

    for (int i = 0; i < n; ++i) {
        int worst_idx = -1;
        for (int j = 0; j < m; ++j)
            if (b[j] >= p[i] && (worst_idx == -1 || b[j] > b[worst_idx]))
                worst_idx = j;

        a[i] = (worst_idx != -1) ? (b[worst_idx] -= p[i], worst_idx) : -1;
    }

    printf("\nProcess No.\tProcess Size\tBlock No.\n");
    for (int i = 0; i < n; ++i)
        printf("%d\t\t%d\t\t%s\n", i + 1, p[i], (a[i] != -1) ? (char[]){a[i] + 49, '\0'} : "Not Allocated");

    return 0;
}

