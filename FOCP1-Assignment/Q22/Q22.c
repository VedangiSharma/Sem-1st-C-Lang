#include <stdio.h>
#include <string.h>

int main() {

    char word[21];
    int count_z = 0;
    int count_o = 0;
    int I = 0;
    
    scanf("%20s", word);

    int len = strlen(word);
    
    while (I < len && word[I] == 'z') {
        count_z++;
        I++;
    }
    
    while (I < len && word[I] == 'o') {
        count_o++;
        I++;
    }
    if (I == len && count_o == 2 * count_z) {
        printf("Yes\n");
    } 
    else {
        printf("No\n");
    }
    return 0;
}