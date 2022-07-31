#include <stdio.h>

int usAlma(int, int);
 
int main() {
    int taban = 8;
    int us = 0;
    int sonuc;
 
    sonuc = usAlma(taban, us);
 
    printf("%d in %d.kuvveti = %d \n", taban, us, sonuc);
    return 0;
}
 
int usAlma(int taban, int us) {
    if (us == 0)
        return 1;
    return taban * usAlma(taban, us - 1);
}
