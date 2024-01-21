# include <stdio.h>
# include <stdlib.h>
void main(){
    int choice;
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Hello");
        break;
        case 2:
        exit(0);
        break;
        case 3:
        printf("Bye");
        break;
        default:
        printf("Default Value");
    }

}