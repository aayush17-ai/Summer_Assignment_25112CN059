#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[100];
    int i, start = 0, maxLen = 0, len;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            int wordLen = i - start;

            if (wordLen > maxLen) {
                maxLen = wordLen;
                strncpy(longest, &str[start], wordLen);
                longest[wordLen] = '\0';
            }

            start = i + 1;
        }
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}