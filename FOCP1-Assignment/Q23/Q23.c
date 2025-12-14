#include <stdio.h>

long long min(long long a, long long b) {
    return (a < b) ? a : b;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long Cg, Cp;
        scanf("%lld %lld", &Cg, &Cp);

        int N;
        scanf("%d", &N);

        int solved1 = 0;
        int solved2 = 0;
        
        for (int i = 0; i < N; i++) {
            int P1_status, P2_status;
            scanf("%d %d", &P1_status, &P2_status);
            
            solved1 += P1_status;
            solved2 += P2_status;
        }

        long long cost1 = (long long)solved1 * Cg + (long long)solved2 * Cp;
        long long cost2 = (long long)solved1 * Cp + (long long)solved2 * Cg;

        printf("%lld\n", min(cost1, cost2));
    }

    return 0;
}