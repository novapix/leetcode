#include<string.h>
#include<stdio.h>


// use switch case to get corresponding values
int getValue(char letter) {
    switch (letter) {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default: break;
    }
    return 0;
}

int romanToInt(char* s) {
    int len = strlen(s);
    int total = getValue(s[len - 1]);
    for (int i = 0; i < len - 1;i++) {
        if (getValue(s[i]) < getValue(s[i + 1]))
            total -= getValue(s[i]);
        else
            total += getValue(s[i]);
    }
    return total;
}

int main() {
    char* romanNumeral = "DCXXI";
    int result = romanToInt(romanNumeral);
    printf("%d\n", result);
    return 0;
}