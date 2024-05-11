# Power of Two

## Alternative
### C
- using while loop
```c
int countSetBits(int n) {
    int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
    }
    return count;
}
bool isPowerOfTwo(int n) {
    return n > 0 && countSetBits(n) == 1;
}
```