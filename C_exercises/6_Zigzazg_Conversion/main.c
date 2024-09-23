#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* convert(char* s, int numRows) {

    if (numRows == 1 || numRows >= strlen(s)) {
        return s;
    }

    int len = strlen(s);
    char* result = (char*)malloc(len + 1);
    int index = 0;

    int cycleLen = 2 * numRows - 2;

    for (int row = 0; row < numRows; row++) {
        for (int j = row; j < len; j += cycleLen) {
            result[index++] = s[j];

            if (row != 0 && row != numRows - 1 && j + cycleLen - 2 * row < len) {
                result[index++] = s[j + cycleLen - 2 * row];
            }
        }
    }

    result[index] = '\0';

    return result;
}