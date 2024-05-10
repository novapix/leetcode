# Roman to Integer

## Alternative Solns
### C
- Character as Index
    ```C
    #include<string.h>
    #include<stdio.h>

    int romanToInt(char* s) {
        int len = strlen(s);
        // Use chars to index corresponding values
        int roman[256] = { 0 };
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;

        int total = roman[(unsigned char)s[len - 1]];

        for (int i = 0; i < len - 1;i++) {
            if (roman[(unsigned char)s[i]] < roman[(unsigned char)s[i + 1]])
                total -= roman[(unsigned char)s[i]];
            else
                total += roman[(unsigned char)s[i]];
        }
        return total;
    }

    int main() {
        char* romanNumeral = "MCMXCIV";
        int result = romanToInt(romanNumeral);
        printf("%d\n", result);
        return 0;
    }
```