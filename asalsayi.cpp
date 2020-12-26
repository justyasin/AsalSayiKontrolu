#include <stdio.h>

int asal_mi(int sayi){
	int i;				   
	for(i=2;i<sayi;i++)  //2'den say� kadar olan say�lar� b�l�n�p b�l�nmedi�ini kontrol ediyoruz.
	{					// 1 hersay�ya b�l�n�r.Kontrole gerek duyulmaz.
		if(sayi%i==0)   //Herhangi bir say�ya tam b�l�rse asal olmad��� anla��l�r.   
		{
			return 0;  //Sonu� olarak bize 0 geri d�nd�r�ls�n. Bunu asal olmama durumu i�in kullanal�m.
		}
	}
			return 1;  //Asal i�in de 1 d�ns�n.
}

int main(){
	
	int a;
	printf("Sayiyi Giriniz: ");
	scanf("%d",&a);
	
	if(asal_mi(a)==0 || a<2) //2'den k���k asal say� olmad��� i�in kontrol yap�lmaz.
	{
		printf("Asal DEGILDIR!");
	}
	else
	{
		printf("Sayi ASALDIR!");
	}


   return 0;
}
