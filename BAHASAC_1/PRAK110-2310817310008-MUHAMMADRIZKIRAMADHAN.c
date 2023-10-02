#include <stdio.h>
#include <math.h>
int main()
{
    int A = 12;
    int C = 5;
    int B = sqrt (A*A + C*C);
    int K = A + B + C;
    int L = 0.5*C*A;

    printf("Diketahui :\n");
    printf("Alas = %.d cm\n", C);
    printf("Tinggi = %d cm\n\n", A);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", A);
    printf("Sisi B = %d cm\n", B);
    printf("Sisi C = %d cm\n", C);
    printf("Keliling = %d cm\n", K);
    printf("Luas = %d cm\n", L);
    
    return 0;
}
