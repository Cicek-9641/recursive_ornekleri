#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int AltKume(int ksayi){
int esonuc;
if(ksayi==0)
esonuc=1;
else
esonuc=2*AltKume(ksayi-1);
return esonuc;
}

int main() 
{	
	int eleman;
	int nkume ;
    printf("kumenin kac elemanli oldunu girin:");
    scanf("%d",&eleman);
    nkume=AltKume(eleman);
    printf("%d Elemanli Kumenin %d Alt Kumesi Bulunur",eleman,nkume);
    scanf("%d",eleman);
    return 0;
}

