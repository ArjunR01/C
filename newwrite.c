# include <stdio.h>
#include <stdlib.h>
void main(){

FILE *fptr;
fptr=fopen("Write.txt","w");

char ch;

while((ch=getchar())!=EOF){
    fputc(ch,fptr);
}
fclose(fptr);



}