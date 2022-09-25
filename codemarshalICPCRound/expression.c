#include<stdio.h>
int max(n,maximum){

    if(n>maximum){
        maximum=n;
    }

    return maximum;
}
int main(){
    int a,b,c,maximum=0;
    scanf("%d%d%d",&a,&b,&c);
    int total=0;

    total=a*b*c;
    maximum=max(total,maximum);

    total=a+b*c;
    maximum=max(total,maximum);

    total=(a+b)*c;
    maximum=max(total,maximum);

    total=a+(b*c);
    maximum=max(total,maximum);

    total=a*b+c;
    maximum=max(total,maximum);

    total=a*(b+c);
    maximum=max(total,maximum);

    total=(a*b)+c;
    maximum=max(total,maximum);

    total=a+b+c;
    maximum=max(total,maximum);
    printf("%d",maximum);
    return 0;
}
