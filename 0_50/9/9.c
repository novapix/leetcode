#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0)
        return false;
    long org = x;
    long rev = 0;
    while (x > 0) {
        rev = rev * 10 + x % 10;
        x = x / 10;
    }
    return org == rev;
}