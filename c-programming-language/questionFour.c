#include <stdio.h>

// Fungsi untuk membaca matriks dari input pengguna
void readMatrix(int matrix[3][3], int n) {
    printf("Masukkan elemen matriks %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Membaca input sebagai integer
            printf("Elemen [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

int main() {
    int matrix[3][3];
    int n = 3; // Ukuran matriks NxN
    int diagonal1 = 0, diagonal2 = 0;

    // Membaca input matriks
    readMatrix(matrix, n);

    // Menghitung jumlah diagonal utama dan diagonal sekunder
    for (int i = 0; i < n; i++) {
        diagonal1 += matrix[i][i];
        diagonal2 += matrix[i][n - i - 1];
    }

    int difference = diagonal1 - diagonal2;

    // Menampilkan hasil
    printf("Jumlah diagonal utama = %d\n", diagonal1);
    printf("Jumlah diagonal sekunder = %d\n", diagonal2);
    printf("Hasil pengurangan = %d\n", difference);

    return 0;
}
