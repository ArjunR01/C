# include <stdio.h>
# include <stdlib.h>
void main(){
FILE *fptr;
char ch;
fptr=fopen("Test.txt","r");
ch=fgetc(fptr);
while(ch!=EOF){
    printf("%c",ch);
  ch= fgetc(fptr);
}
fclose(fptr);



}