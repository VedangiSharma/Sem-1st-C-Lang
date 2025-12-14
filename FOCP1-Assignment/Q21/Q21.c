#include <stdio.h>

int main() {
    int L, N, W, H;

    if (scanf("%d", &L) != 1) {
        return 1;
    }

    if (scanf("%d", &N) != 1) {
        return 1;
    }

    for (int i = 0; i < N; i++) {
        if (scanf("%d %d", &W, &H) != 2) {
            break;
        }

        if (W < L || H < L) {
            printf("UPLOAD ANOTHER\n");
        } else {
            if (W == H) {
                printf("ACCEPTED\n");
            } else {
                printf("CROP IT\n");
            }
        }
    }

    return 0;
}