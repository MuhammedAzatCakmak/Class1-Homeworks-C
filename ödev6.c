#include<stdio.h>

int main(){

int girdi;

printf("bir deger giriniz: ");
scanf("%d", &girdi);

for(int k = 1 ; k <= girdi ; k++)
{
    for (int x = 1 ; x <= k ; x++)
    {
        printf("#");
    }

    printf("\n");

}

 }