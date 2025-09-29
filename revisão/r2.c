#include <stdio.h>

int main(){

    int numero;
    int n=1;
    scanf("%d",&numero);

    for(int i=1;i<=numero;i++){

        for(int j=1; j<=i;j++){

            printf("%d ",n);
            n++;


        }
        printf("\n");
    }

    return 0;
}