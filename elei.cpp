#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int nulo;
int c1;
int c2;
int c3;
int c4;
int c5;
int c6;


int votar() {

int candidato, confirmador;



printf("Para Voto NULO ou BRANCO, digite 00 no candidato.\n\nDigite o numero do candidato:");
scanf("%d",&candidato);

switch(candidato)
{

    case 00:

        
        printf("Seu voto é: NULO OU BRANCO \nConfirma o voto? \n\n1-CONFIRMA\n2-CANCELAR\n\n");
        scanf("%d",&confirmador);

        if(confirmador==1)
        {
           // nulo++;
           nulo = nulo +1;
            
            printf("Voto confirmado, obrigado por votar! \n\n\n");
            sleep (3);

        }
        if(confirmador==2)
        {
            votar();
        }
        if((confirmador!=1)&&(confirmador!=2))
        {
            
            printf("Opcao invalida, digite 1 para CONFIRMAR ou 2 para CANCELAR.");
        }

        votar();

        break;


    case 9999:

        //apuracao(c1, c2, c3, c4, c5, c6);
printf("*****************************************\n");
printf("ELEICOES 2022 - PESQUISA - PRESIDENTES\n");
printf("*****************************************\n");

printf("\nHENRIQUE: %d VOTOS\n",c1);
printf("\nEMERSON %d VOTOS\n",c2);
printf("\nGABRIEL: %d VOTOS\n",c3);
printf("\nRODRIGO: %d VOTOS\n",c4);
printf("\nMANOEL: %d VOTOS\n",c5);
printf("\nGUSTAVO: %d VOTOS\n",c6);
printf("\nBRANCOS OU NULOS: %d VOTOS\n",nulo);

sleep (15);

    break;

    case 1:

        
        printf("Seu candidato é: HENRIQUE \nConfirma o voto? \n\n1-CONFIRMA\n2-CANCELAR\n\n");
        scanf("%d",&confirmador);

        if(confirmador==1)
        {
           // c1++;
           c1 = c1 +1;
           
            printf("Voto confirmado, obrigado por votar!\n\n\n");
            sleep (5);

        }
        if(confirmador==2)
        {
            votar();
        }
        if((confirmador!=1)&&(confirmador!=2))
        {
            system("clear");
            printf("Opcao invalida, digite 1 para CONFIRMAR ou 2 para CANCELAR.");
        }

        votar();

        break;

    case 2:

        
        printf("Seu candidato é: EMERSON \nConfirma o voto? \n\n1-CONFIRMA\n2-CANCELAR\n\n");
        scanf("%d",&confirmador);

        if(confirmador==1)
        {
           // c2++;
           c2 = c2 +1;
            
            printf("Voto confirmado, obrigado por votar!\n\n\n");
            sleep (5);

        }
        if(confirmador==2)
        {
            votar();
        }
        if((confirmador!=1)&&(confirmador!=2))
        {
           
            printf("Opcao invalida, digite 1 para CONFIRMAR ou 2 para CANCELAR.");
        }
        votar();
        break;

    case 3:

        
        printf("Seu candidato é: GABRIEL \nConfirma o voto? \n\n1-CONFIRMA\n2-CANCELAR\n\n");
        scanf("%d",&confirmador);

        if(confirmador==1)
        {
           // c3++;
           c3 = c3 +1;
            
            printf("Voto confirmado, obrigado por votar!\n\n\n");
            sleep (5);

        }
        if(confirmador==2)
        {
            votar();
        }
        if((confirmador!=1)&&(confirmador!=2))
        {
            
            printf("Opcao invalida, digite 1 para CONFIRMAR ou 2 para CANCELAR.");
        }
        votar();
        break;

    case 4:

        
        printf("Seu candidato é: RODRIGO \nConfirma o voto? \n\n1-CONFIRMA\n2-CANCELAR\n\n");
        scanf("%d",&confirmador);

        if(confirmador==1)
        {
           // c4++;
           c4 = c4 +1;
           
            printf("Voto confirmado, obrigado por votar!\n\n\n");
            sleep (5);

        }
        if(confirmador==2)
        {
            votar();
        }
        if((confirmador!=1)&&(confirmador!=2))
        {
            
            printf("Opcao invalida, digite 1 para CONFIRMAR ou 2 para CANCELAR.");
        }
	
		case 5:
			printf("Seu candidato é: MANOEL \nConfirma o voto? \n\n1-CONFIRMA\n2-CANCELAR\n\n");
        scanf("%d",&confirmador);

        if(confirmador==1)
        {
           // c5++;
           c5 = c5 +1;
           
            printf("Voto confirmado, obrigado por votar!\n\n\n");
            sleep (5);

        }
        if(confirmador==2)
        {
            votar();
        }
        if((confirmador!=1)&&(confirmador!=2))
        {
            
            printf("Opcao invalida, digite 1 para CONFIRMAR ou 2 para CANCELAR.");
        }
			
		case 6:
			
			printf("Seu candidato é: GUSTAVO \nConfirma o voto? \n\n1-CONFIRMA\n2-CANCELAR\n\n");
        scanf("%d",&confirmador);

        if(confirmador==1)
        {
           // c6++;
           c6 = c6 +1;
           
            printf("Voto confirmado, obrigado por votar!\n\n\n");
            sleep (5);

        }
        if(confirmador==2)
        {
            votar();
        }
        if((confirmador!=1)&&(confirmador!=2))
        {
            
            printf("Opcao invalida, digite 1 para CONFIRMAR ou 2 para CANCELAR.");
        }
    default:

        
        printf("Candidato invalido, digite o numero do partido. \n\n");
        sleep(2);

        }

votar();

}

int apuracao(int c1, int c2, int c3, int c4, int c5, int c6, int nulo) {

printf("*****************************************\n");
printf("ELEICOES 2022 - PESQUISA - PRESIDENTES\n");
printf("*****************************************\n");

printf("\nHENRIQUE: %d VOTOS\n",c1);
printf("\nEMERSON %d VOTOS\n",c2);
printf("\nRODRIGO: %d VOTOS\n",c3);
printf("\nGABRIEL: %d VOTOS\n",c4);
printf("\nMANOEL: %d VOTOS\n",c5);
printf("\nGUSTAVO: %d VOTOS\n",c6);
printf("\nBRANCOS OU NULOS: %d VOTOS\n",nulo);


return 0;

}

int main() {


nulo = 0;
c1 = 0;
c2 = 0;
c3 = 0;
c4 = 0;
c5 = 0;
c6 = 0;
printf("*****************************************\n");
printf("ELEICOES 2022 - PESQUISA - PRESIDENTES\n");
printf("*****************************************\n");

printf("\n\nBem-vindo(a) a pesquisa eleitoral 2022.\nPara iniciar aperte qualquer tecla.\n\n");
getchar();

votar();

return 0;

}