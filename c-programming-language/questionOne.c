#include <stdio.h>

// Fungsi untuk mendapatkan panjang string
int getStringLength(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Fungsi untuk membalik huruf dalam string
void reverseAlphabets(char *str) {
    int length = getStringLength(str);
    int i = 0, j = length - 1;

    while (i < j) {
        // Cari huruf dari kiri
        while (i < j && !((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) {
            i++;
        }

        // Cari huruf dari kanan
        while (i < j && !((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z'))) {
            j--;
        }

        // Tukar huruf jika keduanya adalah huruf
        if (i < j) {
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i++;
            j--;
        }
    }
}

int main() {
    char str[100];

    printf("Masukkan string: ");
    gets(str);

    // Menghapus newline character jika ada
    int length = getStringLength(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    reverseAlphabets(str);
    printf("Hasil: %s\n", str);

    return 0;
}