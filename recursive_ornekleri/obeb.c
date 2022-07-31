#include <stdio.h>
 
int obeb(int, int);
 
int main() {
    int sayi1 = 180;
    int sayi2 = 48;
    int sonuc = obeb(sayi1, sayi2);
    printf("obeb(%d,%d) = %d\n", sayi1, sayi2, sonuc);
    return 0;
}
 
int obeb(int x, int y) {
    if (x == y)
        return x;
    if (x > y)
        return obeb(x - y, y);
    return obeb(x, y - x);
}
