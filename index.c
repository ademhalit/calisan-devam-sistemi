#include<stdio.h>
#include<stdlib.h>


struct calisan{
    char isim[20];
    int id;
};

void personelislemi(){
    system("cls");
    printf("personel islemi sectiniz\n");
}
void patron(){
    printf("patron oldunuz\n");
}
void yenikayit(){
    printf("yeni kayit sectiniz\n");
    printf("calisan bilgilerini giriniz\n");


    struct calisan *calisannptr = struct



}
void kayitsil(){
    printf("kayit silme sectiniz\n");
}


int menu()
{
    int secim;
    printf("personel giris icin 1 \n");

    printf("patron girisi icin 2 \n");

    printf("yeni kisi kayit icin 3 \n");

    printf("kayit sil icin 4 \n");

    printf("cikis icin 0 \n");

    scanf("%d", &secim);

    return secim;
}
int main (){

     int secim = menu();

          switch(secim)
          {
              case 1:   personelislemi(); break;
              case 2:   patron(); break;
              case 3:   yenikayit(); break;
              case 4:   kayitsil();  break;
              case 0:   break;
              default:  printf("hatali secim '-' :(  ");
          }





    getchar();
    return 0;
}






