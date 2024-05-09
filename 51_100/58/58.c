#include <string.h>
#include <stdio.h>

int lengthOfLastWord(char* s) {
    int len = strlen(s);
    int count = 0;
    for (int i = len - 1;i > -1; --i) {
        if (s[i] == ' ' && count == 0) continue;
        if (s[i] == ' ') break;
        count++;

    }
    return count;
}