#include<stdio.h>

int main(){

int girdi;
float sonuc;

printf("n degerini giriniz:");
scanf("%d", &girdi);

for(int k = 1 ; k <= girdi ; k++)
{
   sonuc += (((k*k) + 1.23) / (k - 0.25));
}
printf("%.2f",sonuc);




return 0;
}