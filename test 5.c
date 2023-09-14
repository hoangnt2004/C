#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int* a = (int*)malloc(n * sizeof(int));
    int mark[1000000] = {0};

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        mark[a[i]]++;
    }

    for (int i = 0; i <= 1000000; i++) {
        if (mark[i] > 0) {
            printf("%d %d\n", i, mark[i]);
        }
    }

    free(a);

    return 0;
}

