# include <stdio.h>
# include <stdlib.h>
void main(){
char ch;
FILE *fptr1,*fptr2;

/*fptr1=fopen("write.txt","w");
while((ch=getchar())!=EOF){
    fputc(ch,fptr1);
}
fclose(fptr1);
*/

fptr1=fopen("write.txt","r");
fptr2=fopen("newcopy.txt","w");
ch=fgetc(fptr1);
while(ch!=EOF){
    fputc(ch,fptr2);
    ch=fgetc(fptr1);
}
fclose(fptr1);
fclose(fptr2);

}