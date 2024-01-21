# include <stdio.h>
void main(int argc, char **argv){
    printf("arg is %d",argc);
    for(int i=0;i<argc;i++){
        printf("arg %d is %s\n",i,argv[i]);
    }
}