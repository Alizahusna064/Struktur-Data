#include<stdio.h>
#include<conio.h>
#include<string.h>

char balik(char a[50]);

char cek(char b[50],char c[50]);

int main()

{
char m[50],o[50];

printf("Masukkan kalimat : "); gets(m);

strcpy(o,m);

balik(o);

cek(m,o);

getch();

printf("Masukkan kalimat : "); gets(m);
strcpy(o,m);

balik(o);

cek(m,o);

getch();

}


char balik(char a[50])

{

strrev(a);

}

char cek(char b[50],char c[50])

{

if(strcmp(b,c)==0)

{

printf("\n-----Kalimat tersebut termasuk palindrom-----\n\n");

}

else

{

printf("\n-----Kalimat tersebut bukan termasuk palindrom-----\n\n");

}

}

