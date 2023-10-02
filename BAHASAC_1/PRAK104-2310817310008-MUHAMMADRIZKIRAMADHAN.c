#include <stdio.h>

int main()
{
    int A = 400000;
    int B = 350000;
    int hasilA = 400000-(400000*13/100);
    int hasilB = 350000-(350000*21/100);
    printf("Harga sepatu A adalah %d\n", A);
    printf("Harga sepatu B adalah %d\n", B);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi%d\n", hasilA);
    printf("Sepatu B mendapat diskon 13%% sehingga harganya menjadi%d\n", hasilB);
    
    return 0;
   
}