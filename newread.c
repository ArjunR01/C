# include <stdio.h>
# include <stdlib.h>
void main(){
char ch;
FILE *fptr;

fptr=fopen("write.txt","r");
ch=getc(fptr);
while(ch!=EOF){
    printf("%c",ch);
    ch=fgetc(fptr);
}
fclose(fptr);

}