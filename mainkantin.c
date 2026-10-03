#include <stdio.h>
#include <stdlib.h>

/* yemek */

int main() {
	char yemek[20];
	char tatli[20];
	float saat;
	
	printf("Lutfen istediginiz yemegi giriniz");
	scanf("%s",&yemek);
	
	printf("Mesai saatleri= 09.00 & 22.00 \n",saat);
	
	printf("Lutfen siparis verdiginiz saati giriniz");
	scanf("%f",&saat);
	
	
	if(09.00<=saat&&saat<12.00)
	{
		printf("yemeginiz istediginiz saatte gelir \n");
		printf("SURPRIZZ promosyon olarak tatli kazandiniz lutfen istediginiz tatliyi giriniz ");
		scanf("%s",&tatli); 
		printf("siparisinize ek olarak %s eklenmistir",tatli);
	}
	else if(12.00<=saat&&saat<15.00)
	{
		printf("Siparisiniz beklenilen sureden yaklasik 30 dakika gec gelebilir.");
	}
	else if(15.00<=saat&&saat<19.00)
	{
		printf("Siparisiniz beklenilen sureden yaklasik 15 dk gec gelebilir.");
	}
	else if(19.00<=saat&&saat<=22.00)
    {
    	printf("Siparisiniz aksam vakitlerinden dolayi 1 saat gec gelebilir.");
	}
		else
		{
			printf("Siparisinizi lutfen mesai saatleri icinde veriniz.");
		}
	
	return 0;
}
