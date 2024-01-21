/*# include <stdio.h>
# include <stdlib.h>
# define DATA_SIZE 1000
void main()
{
    char ch[DATA_SIZE];

FILE *ptr;
ptr=fopen("new.txt","W");

if(ptr==NULL){
    printf("unable to create file");
}

printf("Enter the content :");
fgets(ch, DATA_SIZE , stdin);

fputs(ch,ptr);

fclose(ptr);



}*/


#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 1000 

 
void main()
{
    char data[DATA_SIZE];

    FILE * fPtr;

    fPtr = fopen("text.txt", "w");

    if(fPtr == NULL)
    {
        printf("Unable to create file.\n"); }

        printf("Enter contents to store in file : \n");
    fgets(data, DATA_SIZE, stdin);

    fputs(data, fPtr);

    fclose(fPtr);

    printf("File created and saved successfully. :) \n");

}