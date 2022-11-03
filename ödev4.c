
/*

Askeri liselere öğrenci kabulünde, adayın yaşının 13-17 arasında olması
(13 ve 17 dahil) ve vücut kitle indeksinin 18.50 - 24.99 arasında olması (alt ve üst sınır dahil)
istenmektedir. Klavyeden girilen yaş,boy ve kilo bilgilerine göre adayın kabul durumunu 
ekrana yazdıran C uygulamasını kodlayalım.

-- VKİ = KİLO(KG) / BOY*BOY(METRE) --

*/

#include<stdio.h>

int main(){

int yas , kilo;
float boy;

printf("ADAYIN YAS'INI GIRINIZ: ");
scanf("%d", &yas);
printf("ADAYIN KILO'SUNU GIRINIZ: ");
scanf("%d", &kilo);
printf("ADAYIN BOY'UNU GIRINIZ: ");
scanf("%f", &boy);

float vucut_kitle_indeksi = ( kilo / (boy*boy) );
printf("VUCUT KITLE INDEKSINIZ: %f\n", vucut_kitle_indeksi);



if((vucut_kitle_indeksi >= 18.50 && vucut_kitle_indeksi <= 24.99) && (yas >= 13 && yas <= 17)){
    printf("TEBRIKLER! KABUL EDILDINIZ... YASINIZ ve VUCUT KITLE INDEKSINIZ ISTENILEN DEGERDEDIR.");
}
else{    
    if(!(yas >= 13 && yas <= 17)){
    printf("UZGUNUZ! MAALESEF REDDEDILDINIZ... YASINIZ ISTENILEN DEGERDE DEGILDIR!");
    }
    else{
        printf("UZGUNUZ! MAALESEF REDDEDILDINIZ... VUCUT KITLE INDEKSINIZ ISTENILEN DEGERDE DEGILDIR!");
    }
}










}