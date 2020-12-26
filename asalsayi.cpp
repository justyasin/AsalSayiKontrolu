#include <stdio.h>

int asal_mi(int sayi){
	int i;				   
	for(i=2;i<sayi;i++)  //2'den sayý kadar olan sayýlarý bölünüp bölünmediðini kontrol ediyoruz.
	{					// 1 hersayýya bölünür.Kontrole gerek duyulmaz.
		if(sayi%i==0)   //Herhangi bir sayýya tam bölürse asal olmadýðý anlaþýlýr.   
		{
			return 0;  //Sonuç olarak bize 0 geri döndürülsün. Bunu asal olmama durumu için kullanalým.
		}
	}
			return 1;  //Asal için de 1 dönsün.
}

int main(){
	
	int a;
	printf("Sayiyi Giriniz: ");
	scanf("%d",&a);
	
	if(asal_mi(a)==0 || a<2) //2'den küçük asal sayý olmadýðý için kontrol yapýlmaz.
	{
		printf("Asal DEGILDIR!");
	}
	else
	{
		printf("Sayi ASALDIR!");
	}


   return 0;
}
