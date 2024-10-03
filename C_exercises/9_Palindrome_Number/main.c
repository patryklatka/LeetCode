#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    char s[32];
    sprintf(s, "%d", x);
    int end = strlen(s)-1;
    int start=0;
    while(start < end && s[start] == s[end]){
        start++;
        end--;
    }
    if(start >= end){
        return true;
    }
    else{
        return false;
    }
}
