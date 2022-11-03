#include<stdio.h>

int main(){
//herhangi bir 4 basamaklı abcd sayısında ab x cd = ba x dc eşitliği sağlanıyorsa bu 4 basamaklı sayıya teryüz sayı denir.    

short sayi1, birler, onlar, yuzler, binler, ab, cd, ba, dc;

printf("4 basamakli bir sayi girin: \n");
scanf("%d", &sayi1);
birler = sayi1%10;
onlar = ((sayi1%100)-birler)/10;
yuzler = ((sayi1%1000)-(sayi1%100))/100;
binler = ((sayi1%10000)-(sayi1%1000))/1000;

ab = binler*10+yuzler;
cd = onlar*10+birler;
ba = yuzler*10+binler;
dc = birler*10+onlar;

if(ab*cd == ba*dc){
    

printf("bu sayi tersyuz sayidir \n");

}

else{

printf("bu sayi tersyuz sayi degildir");


}

return 0;
}
