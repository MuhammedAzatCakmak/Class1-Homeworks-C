
/*

lisansüstü eğitim almak için başvuran adayın ALES puanı,yabancı dil sınavı puanı
ve mezuniyet ortalamasına göre sıralama puanını hesapladıktan sonra sıralamaya
girip giremeyeceğini ekrana yazan C uygulamasını hesaplayınız (bütün puanlar 100 üzerinden hesaplanmaktadır).

// PUAN = ALES'in %50'si + YABANCI DİLİN %25'i + AGNO'nun %25'i //
şeklinde hesaplanır ve 6o puan ve üzerinde alanlar sıralamaya girebilir.

*/

#include<stdio.h>

int main(){

int ales_puani , yabanci_dil_puani , mezuniyet_puani;

printf("ADAYIN ALES PUANINI GIRINIZ: ");
scanf("%d", &ales_puani);
printf("ADAYIN YABANCI DIL SINAVI PUANINI GIRINIZ: ");
scanf("%d", &yabanci_dil_puani);
printf("ADAYIN MEZUNIYET PUANINI GIRINIZ: ");
scanf("%d", &mezuniyet_puani);

int siralama_puani = (ales_puani*50)/100 + (yabanci_dil_puani*25)/100 + (mezuniyet_puani*25)/100;
printf("ADAYIN ALDIGI PUAN: %d\n",siralama_puani);

if(siralama_puani>=60){
    printf("TEBRIKLER! SIRALAMAYA GIRDINIZ.");
}
else{
    printf("UZGUNUZ! SIRALAMAYA GIREMEDINIZ.");
}


}


