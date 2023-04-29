#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>
int main(void) {
    setlocale(LC_ALL,"Portuguese");
    int numPneu,i,j;
    bool pneusOk=false;
    srand(time(NULL));
    printf("PUTS...PARECE QUE VOCÊ FUROU O PNEU DO SEU CARRO... :(\n\n");
    sleep(5);
    do{
        printf("VERIFICANDO OS PNEUS...\n");
        numPneu=rand()%4+1;
        if(pneusOk){
        	printf("\nTODOS OS PNEUS ESTÃO NORMAIS\n");
		}else{
        for(i=1;i<=4;i++){
            sleep(3);
            if(i!=numPneu){
            	system("cls");
            	system("color 0a");
                printf("PNEU %i ESTÁ OK\n",i);
            }
            else{
            	 system("cls");
            	system("color 0c");
                printf("PNEU %i ESTÁ FURADO\n",i);
            }
        }
        sleep(2);
        system("cls");
        system("color 0f");
        printf("\nARRUMANDO PNEU...\n\n");
        sleep(2);
        for(j=1;j<=5;j++){
        	printf("Pressione para tirar o %iº parafuso\n",j);
        	getch();
		}
		system("cls");
		printf("\nTIRANDO O PNEU FURADO\n");
		sleep(2);
		printf("COLOCANDO O ESTEPE\n\n");
		sleep(2);
		system("cls");
		for(j=1;j<=5;j++){
			printf("Pressione para colocar o %iº parafuso\n",j);
			getch();

		}
		system("cls");
		system("color 0a");
		printf("\nPNEU ARRUMADO :)");
		pneusOk=true;
	 }
    }while(!pneusOk);
    return 0;
}