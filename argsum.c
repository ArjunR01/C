# include <stdio.h>
int main(int argc,char **argv){
    printf("arg count is %d\n",argc);
    int a,b;
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    int sum=a+b;
    printf("sum of %d and %d is %d",a,b,sum);
}