#include <stdio.h>

int main(){

    int decimal;

    scanf("%d",&decimal);

    int quociente=decimal;
    int octal[500];
    int i=0;

    while(quociente>0){

         octal[i]=quociente%8;
         quociente=quociente/8;
         i++;

    }

    for(int j=i-1;j>=0;j--){

        printf("%d",octal[j]);
    }

return 0;
}