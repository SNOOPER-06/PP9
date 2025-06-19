#include <stdio.h>

const char* sign_of(int x) {
    if (x > 0)
        return "positive";
    else if (x == 0)
        return "zero";
    else
        return "negative";
}

int main() {
    int test_vals[] = {5, 0, -3, 100, -1};
    int size = sizeof(test_vals) / sizeof(test_vals[0]);
    for (int i = 0; i < size; i++) {
        printf("sign_of(%d) = %s\n", test_vals[i], sign_of(test_vals[i]));
    }
    return 0;
}
