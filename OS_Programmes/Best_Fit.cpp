#include <stdio.h>
#define M 100
#define P 100

int main() {
    int b[M], p[P], a[P], m, n;
    printf("Enter block/process counts: ");
    scanf("%d%d", &m, &n);

    printf("Enter block sizes:\n");
    for (int i = 0; i < m; ++i) scanf("%d", &b[i]);

    printf("Enter process sizes:\n");
    for (int i = 0; i < n; ++i) scanf("%d", &p[i]);

    for (int i = 0; i < n; ++i) {
        int idx = -1;
        for (int j = 0; j < m; ++j)
            if (b[j] >= p[i] && (idx == -1 || b[j] < b[idx]))
                idx = j;

        a[i] = (idx != -1) ? (b[idx] -= p[i], idx) : -1;
    }

    printf("\nProcess No.\tProcess Size\tBlock No.\n");
    for (int i = 0; i < n; ++i)
        printf("%d\t\t%d\t\t%s\n", i + 1, p[i], (a[i] != -1) ? (char[]){a[i] + 49, '\0'} : "Not Allocated");

    return 0;
}

