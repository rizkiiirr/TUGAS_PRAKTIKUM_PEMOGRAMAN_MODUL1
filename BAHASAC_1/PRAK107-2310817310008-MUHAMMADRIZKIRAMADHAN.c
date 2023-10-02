#include <stdio.h>

int main()
{
    int a = 4;
    int b = 5;
    int c = 7;
    int K = a + b + c;
    int H = 85000;
    int T = (a + b + c)*85000;

    printf("Diketahui:\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n",K);
    printf("Harga tanah Per Meter adalah %d\n",H);
    printf("Jawaban:\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", T);

    return 0;
}