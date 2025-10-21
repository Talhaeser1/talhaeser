#include <stdio.h>

/*
int main() {
    int kilo = 2, gram = 120;
    printf("Elmanin kilosu: %d kg\n", kilo);
    printf("Elmanin grami: %d g\n", gram);
    int sayi = 10 ;
    int Toplamasonucumiktari = 12 ;
    int toplam_sonuc = 14 ;
    int _sayi = 16;
    int sayi2 = 18; 


     return 0;
}
     */

/*
int main () {
    int sayi = 10 ;
    int Toplamasonucumiktari = 12 ;
    int toplam_sonuc = 14 ;
    int _sayi = 16;
    int sayi2 = 18; 
    printf("sayi1,  %d \n", sayi );
    printf("sayi2, %d \n", Toplamasonucumiktari);
    printf("sayi3, %d \n" , toplam_sonuc);
     printf("sayi4,  %d \n", _sayi );
      printf("sayi5,  %d \n", sayi2 );

}
*/


// int main (){

// float kilo ;
// printf(" lutfen alacaginiz kiloyu giriniz");
// scanf(" %f ", &kilo);

// printf("girilen kilo :  %.2f", kilo);
// return 0;

// }

// int main () {
//      int a,b;
//      printf("Iki sayi giriniz:");
//      scanf("%d-%d",&a,&b);
//      printf("Birinci sayi : %d \n Ikinci sayi: %d \n ",a,b);
//      return 0 ;

// }

// int main() {
//     int sayi1 = 10, sayi2 = 3, sonuc;

//     sonuc = sayi1 / sayi2;
//     printf("Bolme sonucumuz: %d\n", sonuc);

//     return 0;
// }

// int main() {
//     int sayi1 = 10, sayi2 = 3;

//     sayi1++;
//     sayi2++;

//     printf("Sayi1: %d Sayi2: %d\n", sayi1, sayi2);

//     return 0;
// }

// int main() {
//     int a = 40, b = 12;

//     a += b; // a = a + b;
//     printf("Toplama ve Atama (+=) sonucu: %d\n", a);

//     return 0;
// }

// int main () {
//      int x = 0, y = 0;
//      printf( "Esitmi :  " )
//      return 0 ;
// }

// int main() {
//     int sayi;
//     printf("Bir sayi gir: ");
//     scanf("%d", &sayi);
//     printf("Girdiğin sayi: %d\n", sayi);

//     if (sayi <= 1600){
//         printf("yeterli bakiye.\n");
//     }
//     else{
//         printf("yetersiz bakiye \n");
//     }
//     return 0; 
    
// }
// int main (){
//      int x = 8, y = 12;
//      if (x < y){
//           printf("X sayisi y sayisindan kucuktur. %d < %d \n", x,y);
//      }
//      else{
//           printf("X sayisi y sayisindan büyüktür \n", x , y);
//      }
// }
// int main (){
//      int x , y;
//      printf("x degerini girin: ");
//      scanf("%d", &x);

//      printf("y degerini girin: ");
//      scanf("%d", &y);

//      if (x < y){
//           printf("X sayisi y sayisindan kucuktur. %d < %d", x,y);
//      }
//      else{
//           printf("X sayisi y sayisindan buyuktur veya esittir %d > %d\n", x , y);
//      }
// }
// int main (){
//      int a = 25, b = 40, c = 30;
//      if (a>b){
//           if(a > b){
//           printf("en buyuk: a \n");
//           }
//           else{
//                printf("en buyuk :c \n");
//           }
     
//      }
//      else{
//           if (b>c){
//                printf("en buyuk :b \n");
//           }
//           else{
//                printf("En buyuk :c \n");
//           }
//      }
//      return 0;
// }

// int main() {
//     int yas, puan;

//     printf("yas giriniz: ");
//     scanf("%d", &yas);

//     printf("puan giriniz: ");
//     scanf("%d", &puan);

//     if (yas == 18) { // en dıştaki if
//         printf("yasiniz 18\n");

//         if (puan >= 70) {
//             printf("tebrikler ehliyet alabilirsiniz\n");
//         } else {
//             printf("puaniniz yetersiz\n");
//         }

//     } else {
//         printf("yasiniz tutmuyor\n");
//     }

//     return 0;
// }


// int main() {
//     int puan;

//     printf("puan giriniz: ");
//     scanf("%d", &puan);

//     if (puan >= 85) {
//         printf("geçtiniz\n");
//     } else if (puan > 70) {
//         printf("iyi\n");
//     } else if (puan > 55) {
//         printf("orta\n");
//     } else if (puan > 45) {
//         printf("kaldi\n");
//     } else {
//         printf("çok düşük\n");
//     }
//     return 0;
// }

// int main(){
//      int gun;
//      printf("lutfen gun rakamini giriniz:");
//      scanf("%d", &gun);

//      switch(gun){
//           case 1 :
//           printf("pazartesi");
//           break;

//           case 2 :
//           printf("sali");
//           break;

//           case 3:
//           printf("carsamba");
//           break;

//           case 4:
//           printf("persembe");
//           break;

//           case 5:
//           printf("cuma");
//           break;

//           case 6:
//           printf("cumarteesi");
//           break;

//           case 7 :
//           printf("pazar");
//           break;

//      }
//      return 0 ;
// }

// int main (){
//      int mevsim;
//      printf("lutfen mevsimin sayisini giriniz:");
//      scanf("%d", &mevsim);
     
//      switch (mevsim){
//           case 1 :
//           printf("ilkbahar");
//           break;

//           case 2 :
//           printf("yaz");
//           break;

//           case 3:
//           printf("sonbahar");
//           break;

//           case 4:
//           printf("kis");
//           break;
          
//           default:
//           printf("hatali tus");    
//           break;
//      }
//      return 0;
// }


// int main (){
//      int a = 0 ;
//      while(a < 10){
//           printf("merhaba dunya \n");
//           a++;
//      }
//      return 0 ;
// }

// int main (){
//      int a = 0 ;
//      do{
//           printf("merhaba dünya \n");
//           a++;

//      }while(a<10);
// }

// int main (){
//      int a = 0;

//      for (int a = 0 ;a<5 ; a++){
//           printf("turkiye (for dongusu) \n");
//      }
//      while(a<2){
//           printf("Turkiye (while icin)\n");
//           a ++;
//      }

//      do {
//           printf("turkiye (do icin)\n)");
//      }while(a<1);

// }
