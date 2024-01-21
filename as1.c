# include <stdio.h>
void main(){
    int i=5,a;
//     a=++i + ++i + ++i + ++i;
//     printf("%d",a);
 
    //    a=--i + --i + --i + --i + --i + --i;
       printf("%d %d %d %d\n",--i,i--,--i,--i);
       i=5;
       printf("%d %d %d %d %d %d %d\n",++i,++i,++i,++i,i++,++i,++i);
       i=11;
       printf("%d %d %d %d %d %d %d\n",--i,--i,--i,--i,i--,--i,--i);
       i=5;
       printf("%d %d %d %d\n",i--,--i,--i,--i);
       i=5;
       printf("%d %d %d %d %d %d\n",++i,++i,i++,++i,++i,++i);
       i=6;
       printf("%d %d %d %d %d %d %d",++i,++i,i++,++i,++i,++i,++i);
       i=9;
       printf("%d %d %d %d %d %d %d %d %d\n",--i,--i,--i,--i,--i,--i,i--,--i,--i);
       i=9;
       printf("%d %d %d %d %d %d %d %d %d %d %d ",--i,--i,--i,--i,--i,--i,--i,--i,i--,--i,--i);

}

