#include <stdio.h>

// Fungsi untuk membandingkan dua string secara manual
int stringCompare(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return 0; // Tidak sama
        }
        str1++;
        str2++;
    }
    return (*str1 == *str2); // Sama jika keduanya berakhir pada waktu yang sama
}

// Fungsi untuk menghitung kemunculan kata
void countOccurrences(char input[][10], int inputSize, char query[][10], int querySize, int output[]) {
    for (int i = 0; i < querySize; i++) {
        output[i] = 0; // Inisialisasi jumlah kemunculan kata
        for (int j = 0; j < inputSize; j++) {
            if (stringCompare(query[i], input[j])) {
                output[i]++;
            }
        }
    }
}

// Fungsi untuk mendapatkan ukuran array dua dimensi
int getArraySize(char arr[][10]) {
    int size = 0;
    while (arr[size][0] != '\0') {
        size++;
    }
    return size;
}

int main() {
    char input[100][10];
    char query[100][10];
    int inputSize, querySize;
    int output[100];

    // Contoh input data untuk input array
    printf("Masukkan kata-kata untuk input (akhir dengan ENTER kosong):\n");
    int i = 0;
    while (1) {
        fgets(input[i], sizeof(input[i]), stdin);
        int length = 0;
        while (input[i][length] != '\0') length++;
        if (input[i][length - 1] == '\n') input[i][length - 1] = '\0'; // Hapus newline
        if (length == 1) break; // Hentikan input jika baris kosong
        i++;
    }
    inputSize = i;

    // Contoh input data untuk query array
    printf("Masukkan kata-kata untuk query (akhir dengan ENTER kosong):\n");
    int j = 0;
    while (1) {
        fgets(query[j], sizeof(query[j]), stdin);
        int length = 0;
        while (query[j][length] != '\0') length++;
        if (query[j][length - 1] == '\n') query[j][length - 1] = '\0'; // Hapus newline
        if (length == 1) break; // Hentikan input jika baris kosong
        j++;
    }
    querySize = j;

    // Hitung kemunculan kata
    countOccurrences(input, inputSize, query, querySize, output);

    // Cetak hasil
    printf("OUTPUT = [");
    for (int i = 0; i < querySize; i++) {
        printf("%d", output[i]);
        if (i < querySize - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
