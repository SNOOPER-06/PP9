bool evaluate_sequence(int *arr, int len) {
    int state = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] < 0)       state = -1;
        else if (arr[i] == 0) state = 0;
        else                  state = 1;
        if (state == 1) break;
    }
    switch (state) {
        case 1: return true;
        default: return false;
    }
}
