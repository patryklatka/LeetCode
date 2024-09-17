int lengthOfLongestSubstring(char* s) {
    int max_length = 0;
    int start = 0;
    int length = 0;
    int last_seen[256] = { 0 }; // Zakładając, że używamy ASCII, tablica dla ostatnich wystąpień znaków

    for (int i = 0; i < 256; i++) {
        last_seen[i] = -1;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        char current_char = s[i];

        // Sprawdź, czy znak był już widziany i dostosuj start
        if (last_seen[(unsigned char)current_char] >= start) {
            start = last_seen[(unsigned char)current_char] + 1;
        }

        // Aktualizuj długość aktualnego podciągu
        length = i - start + 1;
        if (length > max_length) {
            max_length = length;
        }

        // Zapamiętaj ostatnie wystąpienie znaku
        last_seen[(unsigned char)current_char] = i;
    }

    return max_length;
}

