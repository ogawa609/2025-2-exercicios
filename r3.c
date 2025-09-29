#include <stdio.h>

int main(){

    int n;
    int v=1;
    
    scanf("%d",&n);
    int livros[n];

    for(int i=0; i<n;i++){

        scanf("%d",&livros[i]);

    }

    for(int i=0; i<n; i++){

        int contador=0;

        for(int j=0;j<n;j++ ){

            if(livros[j]==livros[i]){

                contador++;
            }

            
        }

        if(contador<2){

            printf("%d\n", livros[i]);
            v=0;
        }
    }
    if(v){
        printf("NENHUM");
    }

return 0;
}
