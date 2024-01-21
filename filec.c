# include <stdio.h>
# include <stdlib.h>
void main(){
FILE *fptr1,*fptr2;
char ch;
fptr1=fopen("Test.txt","r");
fptr2=fopen("Copied file.txt","w");
ch=fgetc(fptr1);
while(ch!=EOF){
fputc(ch,fptr2);
ch=fgetc(fptr1);
}
fclose(fptr1);
fclose(fptr2);



}