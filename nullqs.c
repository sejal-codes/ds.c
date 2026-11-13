#include <stdio.h>

int main() {
    int *p = NULL;
    printf("About to dereference NULL...\n");
    printf("%d\n", *p);    // segmentation fault
    return 0;
}
