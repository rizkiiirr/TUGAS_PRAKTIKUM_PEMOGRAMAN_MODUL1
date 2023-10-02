#include <stdio.h>

int main()
{
    float a = 5;
    float jarak = 14;
    float phi = 3.14;
    float Keliling = 2.8;
    float jari= (Keliling / (phi*2)); 

    printf("Diketahui:\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", a);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\n", jarak);
    printf("Jawaban:\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jari);

    return 0;
}
