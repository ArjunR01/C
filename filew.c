# include <stdio.h>
#include <stdlib.h>
void main(){
FILE *fptr;
char ch;
fptr=fopen("Test.txt","w");
while((ch=getchar())!=EOF){
   fputc(ch,fptr);
}
fclose(fptr);



}