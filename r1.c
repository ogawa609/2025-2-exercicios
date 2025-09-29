#include <stdio.h>

int main(){

    float x1,y1,r1;
    float x2,y2,r2;

    scanf("%f %f %f %f %f %f", &x1,&y1,&r1,&x2,&y2,&r2);

    float raios= r1+r2;
    float dist= (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);

    if(raios*raios>=dist){

        printf("Acertou\n");
    }

    else{

        printf("Errou\n");
    }

    return 0;
}