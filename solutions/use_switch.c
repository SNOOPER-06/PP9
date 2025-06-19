#include <stdio.h>

const char* weekday(int d) {
    switch (d) {
        case 1: return "Monday";
        case 2: return "Tuesday";
        case 3: return "Wednesday";
        case 4: return "Thursday";
        case 5: return "Friday";
        case 6: return "Saturday";
        case 7: return "Sunday";
        default: return "Invalid";
    }
}

int main() {
    for (int d = 1; d <= 7; d++) {
        printf("Day %d: %s\n", d, weekday(d));
    }
    return 0;
}
