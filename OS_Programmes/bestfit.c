#include <stdio.h>
#define MAX_B 100
#define MAX_P 100

int main() {
    int b[MAX_B], p[MAX_P], a[MAX_P], m, n;
    printf("Enter block/process counts: ");
    scanf("%d%d", &m, &n);

    printf("Enter block sizes:\n");
    for (int i = 0; i < m; ++i) 
		scanf("%d", &b[i]);

    printf("Enter process sizes:\n");
    for (int i = 0; i < n; ++i) scanf("%d", &p[i]);

    for (int i = 0; i < n; ++i) {
        a[i] = -1;
        for (int j = 0; j < m; ++j)
            if (b[j] >= p[i]) {
                a[i] = j;
                b[j] -= p[i];
                break;
            }
    }

    printf("\nProcess No.\tProcess Size\tBlock No.\n");
    for (int i = 0; i < n; ++i)
        printf("%d\t\t%d\t\t%s\n", i + 1, p[i], (a[i] != -1) ? (char[]){a[i] + 49, '\0'} : "Not Allocated");

    return 0;
}

