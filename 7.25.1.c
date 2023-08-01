#include <stdio.h>

void symm();
void mumulti();
void moneytrans();

int main(){
}

void symm(){
        int a,b,c,d;
    scanf("%d",&a);
    for(d=a,b=0;d>=10;){
        c=d%10;
        b=b*10+c;
        d=d/10;
    }
    b=b*10+d;
    if(a==b){
        printf("Y");
    }
    else{
        printf("N");
    }
}

void mumulti(){
        int a,sum=1;
    scanf("%d",&a);
    while(a-1){
        sum*=a;
        a--;
    }
    printf("%d",sum);
}
void moneytrans(){
    int a=1;
    int b,c,d;
    int n=0;
    for(;a<10;a++)
    {
        for(b=1;b<20;b++)
        {
            for(c=1;c<=37;c++)
            {
                for(d=1;d<=37;d++)
                {
                    if((a+b+c+d==40)&&(10*a+5*b+2*c+d==100)){
                        n++;
                    }
                }
            }
        }
    }
    printf("%d",n);
}