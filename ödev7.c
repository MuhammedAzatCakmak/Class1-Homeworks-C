

//Açıklama satırı eklemeyi unutma.

#include<stdio.h>

int main(){

char arabaTuru;
int gun,yol,ucret;
ucret = 0;

printf("ARABANIN TURUNU GIRINIZ: ");
scanf("%c",&arabaTuru);

printf("ARABAYI KAC GUN KULLANDINIZ: ");
scanf("%d",&gun);

printf("ARABA ILE KAC KM YOL GITTINIZ: ");
scanf("%d",&yol);

switch(arabaTuru){
   
   case 'A':
   case 'a': ucret = gun*20 + yol*18;
   break;

   case 'B':
   case 'b': ucret = gun*32 + yol*22;
   break;

   case 'S':
   case 's': ucret = gun*43 + yol*28;
   break;

   case 'P':
   case 'p': ucret = gun*51 + yol*36;
   break;

   default : printf("GECERLI ARABA TURU GIRMEDINIZ... LUTFEN GECERLI BIR ARABA TURU GIRINIZ!");
   
}

if(ucret != 0){
   printf("ODEMENIZ GEREKEN TUTAR: %d",ucret);
}
   

}