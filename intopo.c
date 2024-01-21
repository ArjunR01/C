# include <stdio.h>
# include <string.h>
int top=-1;
char *stack,*postfix;

void push(char ch){
    top++;
    stack[top]=ch;
}

void pop(){
    top--;
}

int main(){
    char *exp;
    gets(exp);
    infixtopostfix(exp);
    return 0;

}

int isoperator(char ch){
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
        return 1;
    }
    else{
        return 0;
    }
}

int pre(char ch){
    if(ch=='*'||ch=='/'){
        return 2;
    }
    else if(ch=='+'||ch=='-'){
        return 1;
    }
    else{
        return 0;
    }
}

char *infixtopostfix(char *infix){
    int i=0,j=0,k=0;


    while(infix[i]!='\0'){


        if(!isoperator(infix[i])){
        postfix[j]=infix[i];
        j++;
        }
        


        else{
            if(pre(infix[i])>infix[i]){
               push(infix[i]);}
            else{
                postfix[j]=stack[top];
                pop();
                j++;
            }
  
        }
        i++;

        return postfix;
        
    }

    }



