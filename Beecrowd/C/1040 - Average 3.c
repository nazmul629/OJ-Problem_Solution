#include <stdio.h>

int main()
{
   float A,B,C,D,N;
   scanf("%f %f %f %f",&A,&B,&C,&D);
    A = (A*2+B*3+C*4+D*1)/10;
    printf("Media: %.1f\n",A);
    if (A>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if (A<5.0){
        printf("Aluno reprovado.\n");
    }
    else if ((A>=5.0) && (A<7.0)){
        printf("Aluno em exame.\n");
        scanf("%f",&N);
        printf("Nota do exame: %.1f\n",N);
        N = (A+N)/2;
        if (N>=5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",N);
        }
        else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",N);
        }
    }

    return 0;
}

