#include <limits.h>

int myAtoi(char *s) {
    int i = 0;
    int sign = 1;
    long result = 0;

    while (s[i] == ' ') {
        i++;
    }

    if (s[i] == '-' || s[i] == '+') {
        if (s[i] == '-') {
            sign = -1;
        }
        i++;
    }

    while (s[i] >= 48 && s[i] <=57) {
        result = result * 10 + (s[i] - '0');
        i++;

        if (result * sign <= INT_MIN) {
            return INT_MIN;
        } else if (result * sign >= INT_MAX) {
            return INT_MAX;
        }
    }

    return (int)(result * sign);
}
