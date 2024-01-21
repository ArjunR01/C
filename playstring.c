# include <stdio.h>
# include <string.h>
void main(){
    char c,ch[23],str[100];
    scanf("%c",&c);
    scanf("%s",ch);
    scanf("%[^\t\n]s",str);

    printf("%c",c);
    printf("%s",ch);
    printf("%s",str);

}