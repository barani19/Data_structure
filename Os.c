#include<stdio.h>
int p[5];
int c[5];
void signal(int x){
    int z = (x+1)%5;
    p[x] = 0;
    c[x] =0;
    c[z] = 0;
}
void wait(int x){
    int z= (x+1)%5;
    if(c[x]==0 && c[z]==0){
        p[x] = 1;
        c[x] =1;
        c[z] = 1;
    }
    else if(p[x]==1){
       int w;
       printf("do u want to stop the philo\n");
       scanf("%d",&w);
       if(w==1) signal(x);
    }
    else{
        printf("chopstick are busy\n");
        printf("philo want to wait\n");
    }
}
void main(){
     int s,u;
    for(int i=0;i<5;i++){
        p[i]=0;
        c[i]=0;
    }
    do{
    for(int i=0;i<5;i++){
        if(p[i]==0){
            printf("philo %d is thinking\n",i+1);
        }
        else{
            printf("philo %d is eating\n",i+1);
        }
    }
    
    printf("which philo want to eat?\n");
    scanf("%d",&s);
    wait(s);
    printf("want to continue press 1\n");
    scanf("%d",&u);
    }while(u);
}