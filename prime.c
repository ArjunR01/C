# include <stdio.h>

int prime(int n);

int main(){
    int a;
    printf("Enter the Limit of numbers : ");
    scanf("%d",&a);
    for(int j=1 ; j<a ; j++){
        prime(j);
    }


}

int prime(int n){
    for(int i=1 ;i<n-1 ;i++){
        if(i%n!=0){
            printf("Prime number is %d\n",i);
        }
        else
        printf("Not prime is %d\n",i);
    }
}