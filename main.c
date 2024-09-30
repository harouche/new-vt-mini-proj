


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()              //new
{


        int n,options,stock,NV;
        do{
    printf("\n\n\n1:Ajouter un livre au stock \n");
    printf("\n2:Afficher tous les livres disponibles. \n");
    printf("\n3:Rechercher un livre par son titre. \n");
    printf("\n4:Mettre  jour la quantit d'un livre. \n");
    printf("\n5:Supprimer un livre du stock. \n");
    printf("\n6:Afficher le nombre total de livres en stock. \n\n\n\n");

      printf ("\n\tchoisi un numero:\t");
       scanf ("%d",&n);

    char auteur[100];
    char titre[100];
    float prix;
    int total;





   switch (n){

    case 1:{
        printf("\033[1;31mEntrer le titre livre:");
          scanf("%s", titre );

        printf("Entrer  le auteur du livre: ");
          scanf("%s", auteur );

        printf("Entrer le prix du livre: ");
            scanf("%f",&prix);

        printf("Entrer la total en stock: ");
            scanf("%d",&total);


        if(stock<100){
              printf("\n\tLivre ajout� avec succ�s. \n");
              stock++;
        }
        else {
        printf("Stock plein !!!.\n");
         }break;
    }
  case 2:{

      printf("\n\t tliste des livres :\n\n");


        printf("Le titre est : %s\n",titre );
        printf("L'auteur est : %s\n",auteur);
        printf("Le prix  : %.2f\n",prix);
        printf("Le total  : %d\n",total);

  break;

}
  case 3:{

      char recherche[20];
        printf("\n\t entre  le livre recherche :\t");
         scanf("%s" ,recherche);

         int found = 0;

         if (strcmp( titre, recherche) == 0) {

        printf("\nl'auteure : %s",auteur);
        printf("\nLe titre  : %s\n",titre);
        printf("\nLe prix   : %.2f\n",prix);
        printf("\nLe total  : %d\n",total);
found=1;
 printf("\nlivre existe\n\n");
            }

            if (!found ){
         printf("livre n'est pas trouver :");
       }
      break;
            }
  case 4:{

   char recherche[20];
        printf("entre  le livr a mettre a jour :\t");
         scanf("%s" ,recherche);

                if (strcmp(titre, recherche)==0){
                 printf("entrez le nouvelle QT :\t");
                 scanf("%d", &NV);
        total = NV;
                 printf("QT modif avec succs \n");

                 break;
             }
  }
  case 5: {
                char recherche[20];
                printf("Entrez le livre à supprimer: ");
                scanf("%s", recherche);

                    if (strcmp(titre , recherche) == 0) {
                        printf("Livre supprimé avec succès !\n");

                        stock--;
                        }
              else   {
                    printf("Livre non trouvé.\n");
                 }
                  break;   }




    case 6:{

            printf("les livres en stock : %d\n", stock);
                break;
            }
  } //switch

          } while(n!=0);  //do
return 0;
  }
