#include <stdio.h>

void sizes(int arr[]) {
    // arr is really an int * here (array decay)
    printf("Inside function: sizeof(arr) = %zu\n", sizeof(arr));
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    printf("--- int array ---\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d]=%d  *(p+%d)=%d  addr=%p\n",
               i, arr[i], i, *(p + i), (void *)(p + i));
    }

    char carr[5] = {'a', 'b', 'c', 'd', 'e'};
    char *cp = carr;
    printf("--- char array ---\n");
    for (int i = 0; i < 5; i++) {
        printf("*(cp+%d)=%c  addr=%p\n", i, *(cp + i), (void *)(cp + i));
    }

    double darr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double *dp = darr;
    printf("--- double array ---\n");
    for (int i = 0; i < 5; i++) {
        printf("*(dp+%d)=%.1f  addr=%p\n", i, *(dp + i), (void *)(dp + i));
    }

    printf("--- sizeof ---\n");
    printf("In main: sizeof(arr) = %zu\n", sizeof(arr));   // 20
    printf("In main: sizeof(p)   = %zu\n", sizeof(p));     // 8
    sizes(arr);                                            // 8
    return 0;
}

//   
