# include <stdio.h>
void print(int *a,int size){
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}

int partion(int a[],int low,int high){
    int pivot=a[low];
     int i=low+1;
    int j=high;
    int temp;
    do{
        while(a[i]<=pivot){
            i++;
        }
        while(a[j]>pivot){
            j--;
        }
        if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }}
    while(i<j);

temp=a[low];
a[low]=a[j];
a[j]=temp;
return j;

}

int quicksort(int a[], int low, int high){
    int partionindex;
    if(low<high){
        partionindex=partion(a,low,high);
        quicksort(a,low,partionindex-1); 
        quicksort(a,partionindex+1,high);
    }
}

int main(){
    int a[]={5,3,7,89,1,3,7,34,5,2,7,9,3,54};
    int size=sizeof(a) / sizeof(a[0]);
    quicksort(a,0,size-1);
    print(a,size);
    return 0;
}