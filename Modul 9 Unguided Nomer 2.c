#include <stdio.h>
#define N 255

void replace(char*, char, char);
int main(){
  char data[N], find, ganti;

    printf("===============================");
    printf("\n  Program Pengganti Kalimat");
    printf("\n===============================");

    printf("\n\nMasukkan kalimat yang anda inginkan : ");
    scanf("%[^\n]", data);
     printf("> Masukkan karakter yang anda cari: ");
      getchar();scanf("%c", &find);
       printf("> Karakter pengganti: ");
        getchar();scanf("%c", &ganti);
    replace(data,find, ganti);
    printf("\nHasil Pergantiannya adalah %s\n", data);
  return 0;
}

void replace(char *data, char find, char replace){
int i=0;

while(*data !='\0'){

  *data=((*data == find)?replace:*data);
     data++;
    i++;
  }
}
