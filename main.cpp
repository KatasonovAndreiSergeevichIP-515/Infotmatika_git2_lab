#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024
int main(int argc, char** argv) {
 char* str = (char*)malloc(sizeof(char) * SIZE);
 printf("Катасонов Андрей Сергеевич:\n");

 str = gets(str);
 printf("Привет, %s", str);

 scanf("%s", str);
 puts("Привет");
 puts(str);
 ee364fb (Исправлено приветствие)
 return 0;
}