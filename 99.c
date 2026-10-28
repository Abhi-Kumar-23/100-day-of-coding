#include <stdio.h>
#include <string.h>

void checkAnagram(char s[], char t[]) {
    int len_s = strlen(s);
    int len_t = strlen(t);
    
    if (len_s != len_t) {
        printf("Not Anagram\n");
        return;
    }
    
    int count[26] = {0};
    
    for (int i = 0; i < len_s; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return;
        }
    }
    
    printf("Anagram\n");
}

int main() {
    char s[100], t[100];
    printf("Enter the first string: ");
    scanf("%s", s);
    printf("Enter the second string: ");
    scanf("%s", t);
    checkAnagram(s, t);
    return 0;
}
