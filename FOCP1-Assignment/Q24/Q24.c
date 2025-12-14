#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char S[101];
    if (scanf("%100s", S) != 1) {
        return 1;
    }
    int len = strlen(S);

    for (int I = 0; I < len; I++) {

        if (islower(S[I])) {
            S[I] = toupper(S[I]);
        } 
        else if (isupper(S[I])) {
            S[I] = tolower(S[I]);
        }
    }
    printf("%s\n", S);
    return 0;
}