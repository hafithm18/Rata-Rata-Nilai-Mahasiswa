#include "stdio.h"

int main() 
{
    int n;
    float nilai, total = 0, min, max, rata_rata;

    printf("Masukkan jumlah nilai mahasiswa: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Jumlah data harus lebih dari 0.\n");
        return 0;
    }
    printf("Masukkan nilai ke-1: ");
    scanf("%f", &nilai);

    min = max = nilai;
    total = total + nilai;

    for (int i = 2; i <= n; i++) {
        printf("Masukkan nilai ke-%d: ", i);
        scanf("%f", &nilai);

        total = total + nilai;

        if (nilai < min) {
            min = nilai;
        }

        if (nilai > max) {
            max = nilai;
        }
    }
    rata_rata = total / n;
    printf("\nNilai Minimal: %.2f\n", min);
    printf("Nilai Maksimal: %.2f\n", max);
    printf("Nilai Rata-Rata: %.2f\n", rata_rata);
    printf("\n\n Jadi nilai rata-rata mahasiswa selama %d semester adalah: %.2f", n, rata_rata);
    return 0;
}