#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_wrong(int a, int b) {
    int temp = a;
    a = b;
    b = temp;          // only changes the local copies
}

int main() {
    int x = 5, y = 9;

    printf("Before:      x=%d y=%d\n", x, y);
    swap_wrong(x, y);
    printf("swap_wrong:  x=%d y=%d\n", x, y);   // unchanged
    swap(&x, &y);
    printf("swap:        x=%d y=%d\n", x, y);   // swapped
    return 0;
}
