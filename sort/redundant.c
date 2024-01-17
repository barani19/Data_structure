#include<stdio.h>
int stack[100];
int top =-1;

int redundant(char a[],int n){
   
    for(int i=0;i<n;i++){
		if(a[i]==')'){
       char t = stack[top];
	   top--;
	   int ans = 1;
	   while(top!=-1 && t!='('){
		 if(t=='+'||t=='-'||t=='*'||t=='/'||t=='%')
		   ans =0;
		 t = stack[top];
		 top--;
	   }
	   if(ans==1) return 1;
    }
	else{
		top++;
		stack[top] = a[i];
	}
	}


    return 0;
}

void main(){
    char a[] = "(a+(v+b)/c)";
	int n = sizeof(a)/sizeof(a[0]);
    int ans = redundant(a,n);
    if(ans==1) {
        printf("The expression  hev redundant brackets\n");
    }
    else
    {
        printf("The expression does not have redundant brackets\n");
    }
}
