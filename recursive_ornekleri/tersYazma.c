#include <stdlib.h>
#include <string.h>

void tersyaz (char *);

int main(){        
	
	char *kelime;
	int uzunluk;
	
	printf("Kelimenizin uzunlugunu giriniz: ");
	scanf("%d",&uzunluk);
	kelime=(char *)malloc((uzunluk+1)*sizeof(char));
	printf("Kelimenizi giriniz: ");	
	scanf("%s",kelime);
	
	tersyaz(kelime);
	return 0;
}
void tersyaz (char *str){
	if(*str){
		tersyaz(str+1);
		printf("%c",*str);
	}
}
