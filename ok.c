#include <stdio.h>
#include <stdlib.h>

struct vector {
    int *data;
    int size;
};

struct vector combine(struct vector *arr1, struct vector *arr2) {
    struct vector ans;
    ans.size = arr1->size + arr2->size;
    ans.data = (int *)malloc(ans.size * sizeof(int));

    int i = 0, j = 0, k = 0;
    while (i < arr1->size && j < arr2->size) {
        if (arr1->data[i] < arr2->data[j]) {
            ans.data[k] = arr1->data[i];
            i++;
        } else {
            ans.data[k] = arr2->data[j];
            j++;
        }
        k++;
    }

    while (i < arr1->size) {
        ans.data[k] = arr1->data[i];
        i++;
        k++;
    }

    while (j < arr2->size) {
        ans.data[k] = arr2->data[j];
        j++;
        k++;
    }

    return ans;
}

int main() {
    struct vector arr1, arr2;
    

    // Allocate memory and initialize data for arr1 and arr2
    
    
    // Initialize data for arr1 and arr2 (e.g., using a loop)

    struct vector result = combine(&arr1, &arr2);
    for (int i = 0; i < result.size; i++) {
        printf("%d ", result.data[i]);
    }

    // Free allocated memory for arr1, arr2, and result
    free(arr1.data);
    free(arr2.data);
    free(result.data);

    return 0;
}

