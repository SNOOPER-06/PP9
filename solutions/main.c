#include <stdio.h>
#include "flowchart_impl.h"

int main() {
    int x = 10;
    int output = compute_result(x);
    printf("Result for x = %d is %d\n", x, output);
    return 0;
}
