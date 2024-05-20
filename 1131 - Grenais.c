#include<stdio.h>
int main()
{
    int In, Gr, k, InC=0, GrC=0, match=0, Draw=0;
    while(1)
    {
        scanf("%d %d",&In,&Gr);
        match++;
        if(In > Gr){
            InC++;
        }
        else if(In < Gr){
            GrC++;
        }
        else{
            Draw++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &k);
        if(k == 1) continue;
        else{
            break;
        }
    }
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", match, InC, GrC, Draw);
    if(InC > GrC){
        printf("Inter venceu mais\n");
    }
    else if(InC < GrC){
        printf("Gremio venceu mais\n");
    }
    else{
        printf("Não houve vencedor\n");
    }
    return 0;
}
