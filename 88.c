#include <stdio.h>
#include <string.h>
void longestUniqueSubstringLength(char s[]) {
    int n = strlen(s);
    int max_len = 0;
    int start = 0;
    int last_idx[256];
    for (int i = 0; i < 256; i++) {
        last_idx[i] = -1;
    }
    for (int i = 0; i < n; i++) {
        if (last_idx[(unsigned char)s[i]] >= start) {
            start = last_idx[(unsigned char)s[i]] + 1;
        }
        last_idx[(unsigned char)s[i]] = i;
        int current_len = i - start + 1;
        if (current_len > max_len) {
            max_len = current_len;
        }
    }
    printf("%d\n", max_len);
}
int main() {
    char s[1000];
    if (scanf("%999s", s) != 1) return 0;
    longestUniqueSubstringLength(s);
    return 0;
}
