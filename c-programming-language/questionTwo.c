#include <stdio.h>

// Fungsi untuk mendapatkan panjang string secara manual
int getStringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Fungsi untuk mencari kata terpanjang dalam kalimat
void findLongestWord(const char *sentence) {
    int maxLength = 0;
    int length = 0;
    const char *wordStart = sentence;
    const char *longestWord = NULL;

    int i = 0;
    while (sentence[i] != '\0') {
        // Cek apakah karakter adalah spasi atau akhir string
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            if (length > maxLength) {
                maxLength = length;
                longestWord = wordStart;
            }
            // Reset length dan update wordStart
            length = 0;
            wordStart = sentence + i + 1;
        } else {
            length++;
        }
        i++;
    }

    // Cek kata terakhir yang mungkin lebih panjang
    if (length > maxLength) {
        maxLength = length;
        longestWord = wordStart;
    }

    if (longestWord != NULL) {
        printf("Kata terpanjang: ");
        for (int i = 0; i < maxLength; i++) {
            putchar(longestWord[i]);
        }
        printf(": %d karakter\n", maxLength);
    }
}

int main() {
    char sentence[256];

    printf("Masukkan sebuah kalimat: ");
    gets(sentence);

    // Menghapus newline character jika ada
    int length = getStringLength(sentence);
    if (length > 0 && sentence[length - 1] == '\n') {
        sentence[length - 1] = '\0';
    }

    findLongestWord(sentence);

    return 0;
}
