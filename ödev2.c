#include<stdio.h>

int main(){

int sayi,A,B,C,D,E;
printf("5 basamakli bir sayi giriniz:");
scanf("%d",&sayi);
printf("sayi = %d\n",sayi);
E=sayi%10;
D=(sayi%100-E)/10;
C=(sayi%1000-sayi%100)/100;
B=(sayi%10000-sayi%1000)/1000;
A=(sayi-sayi%10000)/10000;


if (A == E && B == D){
    printf("sayiniz palindrom bir sayidir.");
}

else{
    printf("sayiniz palindrom bir sayi degildir.");
}




return 0;
}
