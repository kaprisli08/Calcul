#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main(){
	float nomb1, nomb2, resultat;
	char oper;
	int choix = 0;
	
	printf("Premiere nombre:");
	scanf("%f" , &nomb1);
	
	printf("operateur :");
	scanf(" %c", &oper);
		// autre
	 if(oper != '+' && oper!= '-' && oper != '/' && oper!= '*'){
	
			printf(" Pardon cette operation n'existe pas");
			exit(0); 
	}
	printf("deuxieme nombre:");
	scanf("%f", &nomb2);
	// plus
	if(oper == '+'){
		resultat = nomb1 + nomb2;
		printf("le resultat est: %.2f",resultat);
   }
	// moins
	else if (oper == '-'){
	
			resultat = nomb1 - nomb2;
			printf("le resultat est: %.2f",resultat);
	}
	// multiplication
	else if (oper == '*'){
		resultat = nomb1 * nomb2;
		printf("le resultat est: %.2f",resultat);	
	}
	// division
	else if (oper == '/'){
		resultat = nomb1 / nomb2;
		printf("le resultat est: %.4f",resultat);
	}
	

	return 0;
}
